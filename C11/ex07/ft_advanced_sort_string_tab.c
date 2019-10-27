/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:14:22 by remekram          #+#    #+#             */
/*   Updated: 2019/08/21 20:36:11 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*temp;

	i = 0;
	while (tab[i + 1] != NULL)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
