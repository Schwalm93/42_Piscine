/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbartkow <jbartkow@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:08:56 by jbartkow          #+#    #+#             */
/*   Updated: 2021/02/19 18:20:09 by jbartkow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char *a, char *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char *argv[])
{
	int i;
	int c;

	i = 1;
	c = 1;
	while (i < argc)
	{
		c = i;
		while (c < argc)
		{
			if (ft_strcmp(argv[i], argv[c]) <= 0)
			{
				ft_swap(argv[i], argv[c]);
			}
			c++;
		}
		i++;
	}
	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		i--;
	}
	return (0);
}
