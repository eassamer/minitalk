/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:53:06 by eassamer          #+#    #+#             */
/*   Updated: 2021/12/30 15:57:07 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minitalk.h"

void	signall(int signum, int pid)
{
	if (kill(pid, signum) == -1)
		exit(EXIT_FAILURE);
}

void	handler(int signum, siginfo_t *si, void *hh)
{
	static char	c = 0xFF;
	static int	bit = 0;
	static int	pid;

	(void)hh;
	if (si->si_pid)
		pid = si->si_pid;
	if (signum == SIGUSR1)
		c |= 128 >> bit;
	else if (signum == SIGUSR2)
		c ^= 128 >> bit;
	bit++;
	if (bit == 9)
	{
		if (!c)
		{
			signall(SIGUSR1, pid);
		}
		ft_printf("%c", c);
		bit = 0;
		c = 0xFF;
	}
}

int	main(void)
{
	int					pid;
	struct sigaction	sa;

	pid = getpid();
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = handler;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("ha Lpid :%d\n", pid);
	while (1)
	{
		pause();
	}
}
