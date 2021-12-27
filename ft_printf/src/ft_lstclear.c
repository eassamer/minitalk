/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:38:35 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/13 08:30:54 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*c;

	c = *lst;
	if (!del)
		return ;
	while (c)
	{
		next = c->next;
		ft_lstdelone(c, del);
		c = next;
	}
	*lst = NULL;
}
