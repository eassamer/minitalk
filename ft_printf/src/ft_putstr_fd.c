/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:11:56 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/14 13:49:56 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<errno.h>
#include<string.h>
#include<fcntl.h>
#include <stdio.h>
void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
}

int main ()
{
	int fd;
	fd = open("test.txt",O_RDWR | O_CREAT | O_EXCL,0777);
	if (fd == -1)
		printf("%s\n", strerror(errno));
	ft_putstr_fd("hello",fd);
}
