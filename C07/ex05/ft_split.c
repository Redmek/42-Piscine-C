                                                               /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 03:30:30 by remekram          #+#    #+#             */
/*   Updated: 2019/08/19 01:52:03 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int k;

	k = 0;
	while (charset[k])
	{
		if (c == charset[k])
			return (1);
		k++;
	}
	return (0);
}

int		count_words(char *str, char *charset)
{
	int count;
	int k;

	count = 0;
	k = 0;
	if (is_charset(str[0], charset) == 0)
		count++;
	while (str[k])
	{
		if (is_charset(str[k], charset) == 1 &&
				is_charset(str[k + 1], charset) == 0)
			count++;
		k++;
	}
	return (count);
}

void	fn(int *c, int *k)
{
	(*c)++;
	(*k)++;
}

char	**fit_tab(char **tab, char *str, char *charset)
{
	int k;
	int i;
	int l;

	l = 0;
	i = -1;
	k = 0;
	while (str[k])
	{
		l = 0;
		while (is_charset(str[k], charset) == 1 && str[k] != '\0')
			k++;
		if (is_charset(str[k], charset) == 0 && str[k] != '\0')
		{
			i++;
			while (is_charset(str[k], charset) == 0 && str[k] != '\0')
			{
				tab[i][l] = str[k];
				fn(&l, &k);
			}
			tab[i][l] = '\0';
		}
	}
	tab[i + 1] = NULL;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		k;
	int		c;
	int		i;
	char	**tab;

	i = -1;
	k = 0;
	c = 0;
	if (!(tab = (char **)malloc(sizeof(char *) *
					(count_words(str, charset) + 1))))
		return (0);
	while (str[k])
	{
		c = 0;
		while (is_charset(str[k], charset) == 1 && str[k] != '\0')
			k++;
		i = is_charset(str[k], charset) == 0 || str[k] ? i + 1 : i;
		while (is_charset(str[k], charset) == 0 && str[k] != '\0')
			fn(&c, &k);
		if (!(tab[i] = (char *)malloc(sizeof(char) * (c + 1))))
			return (0);
	}
	fit_tab(tab, str, charset);
	return (tab);
}
