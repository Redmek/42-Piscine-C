/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 02:03:07 by remekram          #+#    #+#             */
/*   Updated: 2019/08/21 00:42:02 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		is_charset(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (c == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int		count_words(char *str, char *charset)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && !is_charset(str[i], charset))
			count++;
		while (str[i] && !is_charset(str[i], charset))
			i++;
	}
	return (count);
}

char	*ft_strdup(char *str, char *charset)
{
	char	*dest;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset))
			break ;
		i++;
	}
	if (!(dest = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	dest = ft_strncpy(dest, str, i);
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		k;

	if (!(tab = (char**)malloc(sizeof(char*) * (count_words(str, charset) + 1)))
			|| !str)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i] && k < count_words(str, charset))
	{
		while (is_charset(str[i], charset))
			i++;
		if (str[i] && !is_charset(str[i], charset))
		{
			tab[k] = ft_strdup(str + i, charset);
			k++;
		}
		while (str[i] && !is_charset(str[i], charset))
			i++;
	}
	tab[k] = 0;
	return (tab);
}
