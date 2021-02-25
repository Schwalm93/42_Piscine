/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_ini.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:09:57 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/22 11:37:12 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_array_ini2(int arr[][4]);

void	ft_array_ini(int arr[][4], int arr2[][4])
{
	int row;
	int colmn;

	row = 0;
	colmn = 0;
	while (row < 4)
	{
		while (colmn < 4)
		{
			arr[row][colmn] = 0;
			colmn++;
		}
		colmn = 0;
		row++;
	}
	ft_array_ini2(arr2);
}

void	ft_array_ini2(int arr2[][4])
{
	int row;
	int colmn;

	row = 0;
	colmn = 0;
	while (row < 4)
	{
		while (colmn < 4)
		{
			arr2[row][colmn] = arr2[row][colmn] - 48;
			colmn++;
		}
		colmn = 0;
		row++;
	}
}
