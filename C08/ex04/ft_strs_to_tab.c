/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 01:58:29 by remekram          #+#    #+#             */
/*   Updated: 2019/08/19 11:20:43 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*stock;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (!(stock = (char*)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (src[i])
	{
		stock[i] = src[i];
		i++;
	}
	stock[i + 1] = '\0';
	return (stock);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	if (!(tab = malloc((ac + 1) * sizeof(t_stock_str))))
	{
		tab = NULL;
		return (tab);
	}
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
