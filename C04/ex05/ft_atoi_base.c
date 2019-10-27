/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:43:51 by remekram          #+#    #+#             */
/*   Updated: 2019/08/12 21:35:24 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[k] == '-' || base[k] == '+' || base[k] == '\t' ||
				base[k] == '\n' || base[k] == '\r' || base[k] == '\v' ||
				base[k] == '\f' || base[k] == 32)
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

int		position_base(char c, char *base)
{
	int k;

	k = 0;
	while (base[k])
	{
		if (c == base[k])
			return (k);
		k++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int			k;
	int			m;
	long int	nb;

	k = 0;
	m = 1;
	nb = 0;
	if (checkbase(base) == 1)
	{
		while (str[k] == '\t' || str[k] == '\n' || str[k] == '\r'
				|| str[k] == '\v' || str[k] == '\f' || str[k] == 32)
			k++;
		while (str[k] == '+' || str[k] == '-')
		{
			if (str[k] == '-')
				m = m * (-1);
			k++;
		}
		while (position_base(str[k], base) >= 0)
		{
			nb = nb * ft_strlen(base) + position_base(str[k], base);
			k++;
		}
	}
	return (nb * m);
}
