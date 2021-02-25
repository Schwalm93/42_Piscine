/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_row_colmn.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 09:29:57 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/21 15:52:47 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_row(int arr[][4], int x, int row, int i)
{
	int colmn;

	colmn = 0;
	while (colmn < 4)
	{
		if ((arr[row][colmn] == 0) && (x == 3))
		{
			if (i == 9)
				arr[row][colmn] = 1;
			if (i == 8)
				arr[row][colmn] = 2;
			if (i == 7)
				arr[row][colmn] = 3;
			if (i == 6)
				arr[row][colmn] = 4;
		}
		colmn++;
	}
}

void ft_fill_colmn(int arr[][4], int x, int colmn, int i)
{
	int row;

	row = 0;
	while (row < 4)
	{
		if ((arr[row][colmn] == 0) && (x == 3))
		{
			if (i == 9)
			{
				arr[row][colmn] = 1;
			}
			if (i == 8)
			{
				arr[row][colmn] = 2;
			}
			if (i == 7)
			{
				arr[row][colmn] = 3;
			}
			if (i == 6)
			{
				arr[row][colmn] = 4;
			}
		}
		row++;
	}
}
