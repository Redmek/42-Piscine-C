/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 01:02:28 by remekram          #+#    #+#             */
/*   Updated: 2019/08/06 01:27:47 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int str[size];
	int k;

	k = 0;
	while (k < size)
	{
		str[k] = tab[size - 1 - k];
		k++;
	}
	k = 0;
	while (k < size)
	{
		tab[k] = str[k];
		k++;
	}
}
