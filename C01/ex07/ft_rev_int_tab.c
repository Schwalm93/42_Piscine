/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 06:24:23 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/15 16:34:48 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tabr[size];
	int counter;

	counter = 0;
	while (counter < size)
	{
		tabr[counter] = tab[counter];
		counter++;
	}
	counter = 0;
	while (counter < size)
	{
		tab[counter] = tabr[size - counter - 1];
		counter++;
	}
}

int		main()
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size = 5;
	
	ft_rev_int_tab(tab, size);

	int i;
	i = tab[0];
	i = i + 48;
	write(1, &i, 1);
	i = tab[1];
	i = i + 48;
	write(1, &i, 1);
	i = tab[2];
	i = i + 48;
	write(1, &i, 1);

}