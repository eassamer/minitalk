/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:41:54 by eassamer          #+#    #+#             */
/*   Updated: 2021/12/30 15:38:53 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_print_hexa(int hexa)
{
	char	*base;

	base = "0123456789abcdef";
	if (hexa < 0)
	{
		hexa *= -1;
		ft_putchar('-');
	}
	if (hexa <= 15)
	{
		ft_putchar(base[hexa]);
	}
	if (hexa > 15)
	{
		ft_print_hexa(hexa / 16);
		ft_print_hexa(hexa % 16);
	}
	return (ft_len(hexa));
}
