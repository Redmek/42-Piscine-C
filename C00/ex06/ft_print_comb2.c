/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 21:49:23 by remekram          #+#    #+#             */
/*   Updated: 2019/08/06 20:19:01 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print1(int x)
{
	ft_putchar(x / 10 + '0');
	ft_putchar(x % 10 + '0');
}

void	ft_print2(int x, int y)
{
	ft_print1(x);
	ft_putchar(' ');
	ft_print1(y);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print2(x, y);
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
