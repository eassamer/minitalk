/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:09:04 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/20 16:39:39 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_print_hexa_upper(unsigned long hexa, int *len)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (hexa <= 15)
	{
		ft_putchar(base[hexa]);
		(*len)++;
	}
	if (hexa > 15)
	{
		ft_print_hexa_upper(hexa / 16, len);
		ft_print_hexa_upper(hexa % 16, len);
	}
}
