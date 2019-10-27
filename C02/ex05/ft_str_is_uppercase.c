/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 03:04:31 by remekram          #+#    #+#             */
/*   Updated: 2019/08/06 03:07:26 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_uppercase(char *str)
{
	int k;

	k = 0;
	if (str[k] == '\0')
		return (1);
	while (str[k])
	{
		if (str[k] >= 'A' && str[k] <= 'Z')
			k++;
		else
			return (0);
	}
	return (1);
}
