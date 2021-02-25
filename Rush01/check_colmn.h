/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_colmn.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 08:58:44 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/21 15:51:57 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_fill_colmn(int arr[][4], int x, int row, int i);
void	ft_check_colmn2(int arr[][4]);
void	ft_check_colmn3(int arr[][4]);
void	ft_check_colmn4(int arr[][4]);

void	ft_check_colmn1(int arr[][4])
{
	int row;
	int colmn;
	int i;
	int x;

	row = 0;
	colmn = 0;
	i = 0;
	x = 0;
	while (row < 4)
	{
		if (arr[row][colmn] != 0)
		{
			i = i + arr[row][colmn];
			x++;
		}
		row++;
	}
	ft_fill_colmn(arr, x, colmn, i);
	ft_check_colmn2(arr);
}

void	ft_check_colmn2(int arr[][4])
{
	int row;
	int colmn;
	int i;
	int x;

	row = 0;
	colmn = 1;
	i = 0;
	x = 0;
	while (row < 4)
	{
		if (arr[row][colmn] != 0)
		{
			i = i + arr[row][colmn];
			x++;
		}
		row++;
	}
	ft_fill_colmn(arr, x, colmn, i);
	ft_check_colmn3(arr);
}

void	ft_check_colmn3(int arr[][4])
{
	int row;
	int colmn;
	int i;
	int x;

	row = 0;
	colmn = 2;
	i = 0;
	x = 0;
	while (row < 4)
	{
		if (arr[row][colmn] != 0)
		{
			i = i + arr[row][colmn];
			x++;
		}
		row++;
	}
	ft_fill_colmn(arr, x, colmn, i);
	ft_check_colmn4(arr);
}

void	ft_check_colmn4(int arr[][4])
{
	int row;
	int colmn;
	int i;
	int x;

	row = 0;
	colmn = 3;
	i = 0;
	x = 0;
	while (row < 4)
	{
		if (arr[row][colmn] != 0)
		{
			i = i + arr[row][colmn];
			x++;
		}
		row++;
	}
	ft_fill_colmn(arr, x, colmn, i);
}
