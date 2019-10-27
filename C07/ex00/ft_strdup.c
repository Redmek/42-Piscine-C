/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 04:11:44 by remekram          #+#    #+#             */
/*   Updated: 2019/08/17 23:39:07 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int k;

	k = 0;
	while (str[k])
		k++;
	return (k);
}

char	*ft_strdup(char *src)
{
	int		l;
	int		k;
	char	*dest;

	l = ft_strlen(src);
	if (!(dest = (char *)malloc(sizeof(char) * (l + 1))))
		return (0);
	k = 0;
	while (src[k])
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
