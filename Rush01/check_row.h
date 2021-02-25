/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_row.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 08:58:44 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/21 16:00:51 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "check_colmn.h"
#include "fill_row_colmn.h"

void	ft_check_row2(int arr[][4]);
void	ft_check_row3(int arr[][4]);
void	ft_check_row4(int arr[][4]);

void	ft_check_row1(int arr[][4])
{
	int row;
	int colmn;
	int i;
	int x;

	row = 0;
	colmn = 0;
	i = 0;
	x = 0;
	while (colmn < 4)
	{
		if (arr[row][colmn] != 0)
		{
			i = i + arr[row][colmn];
			x++;
		}
		colmn++;
	}
	ft_fill_row(arr, x, row, i);
	ft_check_row2(arr);
}

void	ft_check_row2(int arr[][4])
{
	int row;
	int colmn;
	int i;
	int x;

	row = 1;
	colmn = 0;
	i = 0;
	x = 0;
	while (colmn < 4)
	{
		if (arr[row][colmn] != 0)
		{
			i = i + arr[row][colmn];
			x++;
		}
		colmn++;
	}
	ft_fill_row(arr, x, row, i);
	ft_check_row3(arr);
}

void	ft_check_row3(int arr[][4])
{
	int row;
	int colmn;
	int i;
	int x;

	row = 2;
	colmn = 0;
	i = 0;
	x = 0;
	while (colmn < 4)
	{
		if (arr[row][colmn] != 0)
		{
			i = i + arr[row][colmn];
			x++;
		}
		colmn++;
	}
	ft_fill_row(arr, x, row, i);
	ft_check_row4(arr);
}

void	ft_check_row4(int arr[][4])
{
	int row;
	int colmn;
	int i;
	int x;

	row = 3;
	colmn = 0;
	i = 0;
	x = 0;
	while (colmn < 4)
	{
		if (arr[row][colmn] != 0)
		{
			i = i + arr[row][colmn];
			x++;
		}
		colmn++;
	}
	ft_fill_row(arr, x, row, i);
	ft_check_colmn1(arr);
}
