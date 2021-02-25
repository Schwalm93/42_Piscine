/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:52:11 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/23 14:47:41 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		if (nb > 1)
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
