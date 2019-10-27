/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 03:08:12 by remekram          #+#    #+#             */
/*   Updated: 2019/08/06 03:10:30 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_printable(char *str)
{
	int k;

	k = 0;
	if (str[k] == '\0')
		return (1);
	while (str[k])
	{
		if (str[k] >= 32 && str[k] <= 126)
			k++;
		else
			return (0);
	}
	return (1);
}
