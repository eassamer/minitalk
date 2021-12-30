/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:45:20 by eassamer          #+#    #+#             */
/*   Updated: 2021/12/30 15:46:33 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <signal.h>
# include "ft_printf/ft_printf.h"

int		str_isdigit(char *str);
int		ft_atoi(char *str);
void	handler(int signum, siginfo_t *si, void *hh);
void	send_string(int pid, char *str);

#endif
