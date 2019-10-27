/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 01:35:37 by remekram          #+#    #+#             */
/*   Updated: 2019/08/18 21:22:20 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int k;

	k = 0;
	while (str[k])
		k++;
	return (k);
}

int		count_char(int size, char **strs)
{
	int c;
	int k;
	int l;

	l = 0;
	k = 0;
	c = 0;
	while (k < size)
	{
		l = 0;
		while (strs[k][l])
		{
			c++;
			l++;
		}
		k++;
	}
	return (c);
}

char	*fill_tab(int size, char *tab, char **strs, char *sep)
{
	int k;
	int l;
	int x;

	k = 0;
	l = 0;
	x = 0;
	while (k < size)
	{
		l = 0;
		while (strs[k][l])
			tab[x++] = strs[k][l++];
		if (k < size - 1)
		{
			l = 0;
			while (sep[l])
				tab[x++] = sep[l++];
		}
		k++;
	}
	tab[x] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		k;
	int		l;
	int		x;

	k = 0;
	l = 0;
	x = 0;
	if (size <= 0)
	{
		if (!(tab = (char *)malloc(sizeof(char) * (1))))
			return (0);
		tab[0] = '\0';
	}
	else
	{
		if (!(tab = (char *)malloc(sizeof(char) * (count_char(size, strs)
							+ ft_strlen(sep) * (size - 1) + 1))))
			return (0);
		tab = fill_tab(size, tab, strs, sep);
	}
	return (tab);
}
