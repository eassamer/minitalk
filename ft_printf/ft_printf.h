/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:40:17 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/20 16:41:00 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include<stdlib.h>
# include <stdarg.h>

void	ft_print_hexa_lower(unsigned long hexa, int *len);
int		ft_putchar(char c);
int		ft_putnbr_u(unsigned int n);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
void	ft_print_hexa_upper(unsigned long hexa, int *len);
int		ft_printf(const char *s, ...);
void	ft_print_p(unsigned long p, int *len);

#endif
