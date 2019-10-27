/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 04:48:08 by remekram          #+#    #+#             */
/*   Updated: 2019/08/07 18:04:07 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	k;
	int				l;

	k = 0;
	l = 0;
	if (n == 0)
		return (l);
	while ((s1[k] != '\0' || s2[k] != '\0') && (l == 0) && (k < n))
	{
		if (s1[k] != s2[k])
			l = (s1[k] - s2[k]);
		k++;
	}
	return (l);
}
