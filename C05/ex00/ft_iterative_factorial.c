/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:03:03 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/23 11:47:08 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb > 0)
	{
		nb--;
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	return (0);
}
