/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 06:50:54 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/19 09:02:08 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			while (to_find[j] != '\0')
			{
				if (str[i + j] != to_find[j])
					break ;
				else if (str[i + j] == to_find[j] && to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
