#ifndef MINITALK_H
#define MINITALK_H

#include<unistd.h>
#include<signal.h>
#include"ft_printf/ft_printf.h"
int		str_isdigit(char *str);
int		ft_atoi(char *str);
void	handler(int signum);
void	send_string(int pid , char *str);
#endif