/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 09:40:20 by bdemir            #+#    #+#             */
/*   Updated: 2021/02/13 17:16:12 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	row_printer(int x, char startpos, char midpos, char endpos)
{
	ft_putchar(startpos);
	while ((x - 1) > 1)
	{
		ft_putchar(midpos);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(endpos);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		row_printer(x, 'A', 'B', 'A');
		y--;
		while (y > 1)
		{
			row_printer(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
		{
			row_printer(x, 'C', 'B', 'C');
		}
	}
	return ;
}
