/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:41:54 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/20 16:32:48 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_print_hexa_lower(unsigned long hexa, int *len)
{	
	char	*base;

	base = "0123456789abcdef";
	if (hexa <= 15)
	{
		ft_putchar(base[hexa]);
		(*len)++;
	}
	if (hexa > 15)
	{
		ft_print_hexa_lower(hexa / 16, len);
		ft_print_hexa_lower(hexa % 16, len);
	}
}
