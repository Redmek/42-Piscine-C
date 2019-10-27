/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 23:44:14 by remekram          #+#    #+#             */
/*   Updated: 2019/08/12 23:47:00 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int k;
	int a;

	k = 1;
	a = 1;
	if (power >= 1)
	{
		while (k <= power)
		{
			a = a * nb;
			k++;
		}
		return (a);
	}
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (0);
}
