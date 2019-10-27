/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:07:23 by remekram          #+#    #+#             */
/*   Updated: 2019/08/10 05:10:54 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int k;
	int m;
	int nb;

	k = 0;
	m = 1;
	nb = 0;
	while (str[k] == '\t' || str[k] == '\n' || str[k] == '\r'
			|| str[k] == '\v' || str[k] == '\f' || str[k] == 32)
		k++;
	while (str[k] == '+' || str[k] == '-')
	{
		if (str[k] == '-')
			m = m * (-1);
		k++;
	}
	while (str[k] >= '0' && str[k] <= '9')
	{
		nb = nb * 10 + (str[k] - '0');
		k++;
	}
	nb = nb * m;
	return (nb);
}
