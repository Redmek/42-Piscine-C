/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 02:58:14 by remekram          #+#    #+#             */
/*   Updated: 2019/08/06 03:03:02 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_lowercase(char *str)
{
	int k;

	k = 0;
	if (str[k] == '\0')
		return (1);
	while (str[k])
	{
		if (str[k] >= 'a' && str[k] <= 'z')
			k++;
		else
			return (0);
	}
	return (1);
}
