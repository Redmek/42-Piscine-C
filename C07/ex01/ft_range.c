/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 03:18:53 by remekram          #+#    #+#             */
/*   Updated: 2019/08/17 23:40:06 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int k;
	int *tab;

	k = 0;
	if (min >= max)
		return (NULL);
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		tab[k] = min;
		min++;
		k++;
	}
	return (tab);
}
