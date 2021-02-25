/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 06:50:54 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/23 10:20:46 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sign(int result, int a)
{
	a = a % 2;
	if (a == 1)
		result = result * -1;
	return (result);
}

int		ft_atoi(char *str)
{
	int i;
	int result;
	int a;

	i = 0;
	a = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '+' && str[i] != '-')
		{
			if ((str[i] < '0') || (str[i] > '9'))
			{
				result = ft_sign(result, a);
				return (result);
			}
			result = result * 10;
			result = result + (str[i] - 48);
		}
		if (str[i] == '-')
			a++;
		i++;
	}
	result = ft_sign(result, a);
	return (result);
}
