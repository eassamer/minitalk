/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:46:50 by eassamer          #+#    #+#             */
/*   Updated: 2021/12/30 15:52:52 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minitalk.h"

void	signal_re(int sig)
{
	if (sig == SIGUSR1)
		ft_printf("💖💖rah msg wssl💖💖\n");
}

void	send_string(int pid, char *str)
{
	int	i;
	int	bit;

	i = 0;
	if (!str)
		exit(1);
	while (1)
	{
		bit = 0;
		while (bit < 9)
		{
			if (str[i] & (128 >> bit))
			{
				if (kill(pid, SIGUSR1) == -1)
					exit(1);
			}
			else if (kill(pid, SIGUSR2) == -1)
				exit (1);
			bit++;
			usleep(200);
		}
		if (!str[i])
			break ;
		i++;
	}
}

int	main(int ac, char **av)
{
	int	pid;

	if (ac == 3 && str_isdigit(av[1]) && av[2][0] != 0)
	{
		signal(SIGUSR1, signal_re);
		pid = ft_atoi(av[1]);
		send_string(pid, av[2]);
	}
	else
	{
		ft_printf("3ndk chi ghalat");
		exit(EXIT_FAILURE);
	}
}
