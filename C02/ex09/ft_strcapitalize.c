/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 03:24:58 by remekram          #+#    #+#             */
/*   Updated: 2019/08/06 04:45:38 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_low_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int k;

	k = 0;
	while (str[k])
	{
		if (str[k] >= 'A' && str[k] <= 'Z')
			str[k] += 32;
		else
			k++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int k;

	i = 0;
	k = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (ft_is_low_alpha(str[i]) == 0)
			k = 1;
		if (str[i] >= '0' && str[i] <= '9')
			k = 0;
		if (k == 1 && ft_is_low_alpha(str[i]) == 1)
		{
			str[i] -= 32;
			k = 0;
		}
		i++;
	}
	return (str);
}
