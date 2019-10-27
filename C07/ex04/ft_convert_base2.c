/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:40:30 by remekram          #+#    #+#             */
/*   Updated: 2019/08/20 22:08:23 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strchr(char *str, int c);
int		ft_strlen(char *str);
int		ft_check_error(char *base);
int		ft_atoi_base(char *str, char *base);

int		ft_nbrlen(int *power, int nbr, char *base)
{
	int	length;

	length = 1;
	*power = 1;
	if (nbr < 0)
	{
		*power = -1;
		length = 1;
	}
	while (nbr <= (-(ft_strlen(base))) || nbr >= ft_strlen(base))
	{
		nbr = nbr / ft_strlen(base);
		*power = *power * ft_strlen(base);
		length++;
	}
	return (length);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		power;
	int		length;
	int		i;
	char	*out;

	if (ft_check_error(base) == 0)
		return (NULL);
	length = ft_nbrlen(&power, nbr, base);
	if (!(out = malloc(length + 1)))
		return (NULL);
	i = 0;
	if (nbr < 0)
		out[i++] = '-';
	while (power != 0)
	{
		out[i++] = base[nbr / power];
		nbr = nbr - (nbr / power) * power;
		power = power / ft_strlen(base);
	}
	out[i] = '\0';
	return (out);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	tmp;

	if (ft_check_error(base_from) == 0)
		return (NULL);
	tmp = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(tmp, base_to));
}
