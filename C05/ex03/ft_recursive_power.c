/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 23:48:09 by remekram          #+#    #+#             */
/*   Updated: 2019/08/12 23:52:05 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power >= 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else if (power < 0)
	{
		return (0);
	}
	return (0);
}
