/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:45:21 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/19 10:39:22 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(void)
{
	char str[] = {"abc"};

	ft_putstr(str);
}
