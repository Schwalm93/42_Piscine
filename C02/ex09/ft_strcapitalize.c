/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschwalm <cschwalm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 06:50:54 by cschwalm          #+#    #+#             */
/*   Updated: 2021/02/18 07:00:31 by cschwalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
}

void	ft_strupcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != 0)
	{
		if ((str[i] > 31 && str[i] < 48) || (str[i] > 57 && str[i] < 65))
		{
			i++;
			if (str[i] < 'a' || str[i] > 'z')
				i++;
			ft_strupcase(str, i);
		}
		if ((str[i] > 90 && str[i] < 97) || (str[i] > 122 && str[i] < 127))
		{
			i++;
			if (str[i] < 'a' || str[i] > 'z')
				i++;
			ft_strupcase(str, i);
		}
		i++;
	}
	return (str);
}
