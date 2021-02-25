/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 06:50:54 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/15 12:23:19 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int countera;
	int counterb;

	countera = 0;
	while (countera < size)
	{
		counterb = countera;
		while (counterb < size)
		{
			if (tab[countera] >= tab[counterb])
			{
				ft_swap(&tab[countera], &tab[counterb]);
			}
			counterb++;
		}
		countera++;
	}
}
