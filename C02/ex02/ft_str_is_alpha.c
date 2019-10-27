/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 02:10:39 by remekram          #+#    #+#             */
/*   Updated: 2019/08/06 02:38:34 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int k;

	k = 0;
	if (str[k] == '\0')
		return (1);
	while (str[k])
	{
		if ((str[k] >= 'A' && str[k] <= 'Z') ||
				(str[k] >= 'a' && str[k] <= 'z'))
			k++;
		else
			return (0);
	}
	return (1);
}