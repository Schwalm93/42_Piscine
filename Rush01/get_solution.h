/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_solution.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:56:06 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/21 16:01:32 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_row.h"

void	ft_get_3(int arr[][4], int arr2[][4]);

void	ft_get_solution(int arr[][4], int arr2[][4])
{
	int row;
	int colmn;

	row = 0;
	colmn = 0;
	while (row < 4)
	{
		while (colmn < 4)
		{
			if (arr[row][colmn] == 0)
			{
				if ((arr2[0][colmn] == 3) && (arr[row + 1][colmn] == 4))
				{
					arr[row][colmn] = 3;
				}
			}
			colmn++;
		}
		colmn = 0;
		row++;
	}
	ft_get_3(arr, arr2);
}

void	ft_get_3(int arr[][4], int arr2[][4])
{
	int row;
	int colmn;

	row = 0;
	colmn = 0;
	while (row < 4)
	{
		while (colmn < 4)
		{
			if (arr[row][colmn] == 0)
			{
				if ((arr2[0][colmn] == 3) && (arr[row + 1][colmn] == 4))
					arr[row][colmn] = 3;
				if ((arr2[1][colmn] == 3) && (arr[row - 1][colmn] == 4))
					arr[row][colmn] = 3;
			}
			colmn++;
		}
		colmn = 0;
		row++;
	}
	ft_check_row1(arr);
}
