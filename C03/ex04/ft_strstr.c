/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 05:11:45 by remekram          #+#    #+#             */
/*   Updated: 2019/08/12 19:10:51 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int k;
	int l;

	k = 0;
	l = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[k])
	{
		l = 0;
		while (str[k + l] == to_find[l])
		{
			if (to_find[l + 1] == '\0')
				return (&str[k]);
			l++;
		}
		k++;
	}
	return (0);
}
