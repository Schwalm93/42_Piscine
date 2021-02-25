/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_check.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 09:19:08 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/21 17:34:32 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_coldown(int arr[][4], int arr2[][4]);
void	ft_rowleft(int arr[][4], int arr2[][4]);
void	ft_rowright(int arr[][4], int arr2[][4]);

void	ft_firstcheck(int arr[][4], int arr2[][4])
{
	int row;
	int colmn;

	row = 0;
	colmn = 0;
	while (colmn < 4)
	{
		if (arr2[row][colmn] == 1)
		{
			arr[row][colmn] = 4;
		}
		if (arr2[row][colmn] == 3)
		{
			arr[2][colmn] = 4;
		}
		if (arr2[row][colmn] == 4)
		{
			arr[row][colmn] = 1;
			arr[row + 1][colmn] = 2;
			arr[row + 2][colmn] = 3;
			arr[row + 3][colmn] = 4;
		}
		colmn++;
	}
	ft_coldown(arr, arr2);
}

void	ft_coldown(int arr[][4], int arr2[][4])
{
	int row;
	int colmn;

	row = 1;
	colmn = 0;
	while (colmn < 4)
	{
		if (arr2[row][colmn] == 1)
		{
			arr[colmn - colmn + 3][colmn] = 4;
		}
		if (arr2[row][colmn] == 3)
		{
			arr[1][colmn] = 4;
		}
		if (arr2[row][colmn] == 4)
		{
			arr[row - 1][colmn] = 1;
			arr[row][colmn] = 2;
			arr[row + 1][colmn] = 3;
			arr[row + 2][colmn] = 4;
		}
		colmn++;
	}
	ft_rowleft(arr, arr2);
}

void	ft_rowleft(int arr[][4], int arr2[][4])
{
	int row;
	int colmn;

	row = 2;
	colmn = 0;
	while (colmn < 4)
	{
		if (arr2[row][colmn] == 1)
		{
			arr[colmn][0] = 4;
		}
		if (arr2[row][colmn] == 3)
		{
			arr[colmn][2] = 4;
		}
		if (arr2[2][colmn] == 4)
		{
			arr[colmn][0] = 1;
			arr[colmn][1] = 2;
			arr[colmn][2] = 3;
			arr[colmn][3] = 4;
		}
		colmn++;
	}
	ft_rowright(arr, arr2);
}

void	ft_rowright(int arr[][4], int arr2[][4])
{
	int row;
	int colmn;

	row = 3;
	colmn = 0;
	while (colmn < 4)
	{
		if (arr2[row][colmn] == 1)
		{
			arr[colmn][0] = 4;
		}
		if (arr2[row][colmn] == 3)
		{
			arr[colmn][1] = 4;
		}
		if (arr2[2][colmn] == 4)
		{
			arr[colmn][0] = 1;
			arr[colmn][1] = 2;
			arr[colmn][2] = 3;
			arr[colmn][3] = 4;
		}
		colmn++;
	}
}
