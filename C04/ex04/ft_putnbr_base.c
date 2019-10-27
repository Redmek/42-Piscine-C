/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:43:02 by remekram          #+#    #+#             */
/*   Updated: 2019/08/10 05:15:20 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int k;

	k = 0;
	while (str[k])
		k++;
	return (k);
}

int		checkbase(char *base)
{
	int k;
	int l;

	k = 0;
	l = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[k])
	{
		if (base[k] == '-' || base[k] == '+')
			return (0);
		l = k + 1;
		while (base[l])
		{
			if (base[k] == base[l])
				return (0);
			l++;
		}
		k++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int nb;

	nb = nbr;
	if (checkbase(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * (-1);
		}
		if (nb >= ft_strlen(base))
			ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}
