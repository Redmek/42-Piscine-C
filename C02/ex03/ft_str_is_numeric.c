/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 02:26:33 by remekram          #+#    #+#             */
/*   Updated: 2019/08/06 03:00:16 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_numeric(char *str)
{
	int k;

	k = 0;
	if (str[k] == '\0')
		return (1);
	while (str[k])
	{
		if (str[k] >= '0' && str[k] <= '9')
			k++;
		else
			return (0);
	}
	return (1);
}
