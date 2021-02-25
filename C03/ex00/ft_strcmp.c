/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 06:50:54 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/18 09:18:32 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	result = s1[i] - s2[i];
	return (result);
}
