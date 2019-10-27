/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 04:12:46 by remekram          #+#    #+#             */
/*   Updated: 2019/08/07 12:57:43 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int k;

	k = 0;
	while (src[k] != '\0' && k < size)
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	while (src[k])
		k++;
	return (k);
}
