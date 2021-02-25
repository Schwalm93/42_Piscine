/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:34:47 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/22 11:34:59 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "first_check.h"
#include "get_solution.h"
#include "print.h"
#include "array_ini.h"

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (*(src + counter) != 0)
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	*(dest + counter) = 0;
	return (dest);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

int		input_validation(int counter, char *str)
{
	int i;
	int text_len;
	char *text;

	i = 0;
	if (counter != 2)
		return (0);
	else if (*str == 0)
		return (0);
	text_len = ft_strlen(str);
	if (text_len != 31)
		return (0);
	text = (char*)malloc(sizeof(char) * text_len);
	ft_strcpy(text, str);
	while (i < text_len)
	{
		if (((i % 2) == 0) && ((text[i] < '1') || (text[i] > '4')))
			return (0);
		else if (((i % 2) == 1) && (text[i] != ' '))
			return (0);
		i++;
	}
	free(text);
	return (1);
}

void	assignment(char *input_str_cpy, int input_values_cpy[][4])
{
	int i;
	int j;
	int array_nbr;

	i = 0;
	j = 0;
	array_nbr = 0;
	while (i < 31)
	{
		j = 0;
		while (j < 4)
		{
			if (input_str_cpy[i] != ' ')
			{
				input_values_cpy[array_nbr][j] = input_str_cpy[i];
				j++;
			}
			i++;
		}
		array_nbr++;
	}
}

int		main(int argc, char *argv[])
{
	int input_values[4][4];
	int arr[4][4];
	char input_str[32];

	if (!(input_validation(argc, argv[1])))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_strcpy(input_str, argv[1]);
	assignment(input_str, input_values);
	ft_array_ini(arr, input_values);
	ft_firstcheck(arr, input_values);
	ft_get_solution(arr, input_values);
	ft_print(arr);
	return (0);
}
