/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:42:49 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/21 15:55:12 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int arr[][4])
{
	int row;
	int colmn;
	int a;

	row = 0;
	colmn = 0;
	while (row < 4)
	{
		while (colmn < 4)
		{
			a = arr[row][colmn] + 48;
			write(1, &a, 1);
			if (colmn < 3)
				write(1, " ", 1);
			colmn++;
		}
		colmn = 0;
		write(1, "\n", 1);
		row++;
	}
}
