/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:10:06 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/20 16:41:25 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_print_p(unsigned long p, int *len)
{
	ft_putstr("0x");
	ft_print_hexa_lower(p, len);
	(*len) += 2;
}
