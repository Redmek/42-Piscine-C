/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 01:56:46 by remekram          #+#    #+#             */
/*   Updated: 2019/08/21 20:31:58 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * (-1);
	}
	else
		nbr = nb;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	else
		ft_putchar(nbr + 48);
}

int		ft_atoi(char *str)
{
	int i;
	int signe;
	int res;

	i = 0;
	res = 0;
	signe = 1;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - 48;
		i++;
	}
	res = signe * res;
	return (res);
}

int		ft_calc(int a, int b, char *op)
{
	if (op[1] == '\0')
	{
		if (op[0] == '/')
			return (a / b);
		if (op[0] == '%')
			return (a % b);
		if (op[0] == '*')
			return (a * b);
		if (op[0] == '+')
			return (a + b);
		if (op[0] == '-')
			return (a - b);
	}
	return (0);
}

int		ft_check_error(int b, char *op)
{
	if (op[0] == '/' && b == 0)
		return (-1);
	if (op[0] == '%' && b == 0)
		return (-2);
	if (op[0] != '/' && op[0] != '%' && op[0] != '*'
			&& op[0] != '+' && op[0] != '-')
		return (-3);
	return (1);
}

int		main(int ac, char **av)
{
	int a;
	int b;

	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	if (ac != 4)
		return (0);
	if (ft_check_error(b, av[2]) < 0)
	{
		if (ft_check_error(b, av[2]) == -1)
			write(1, "Stop : division by zero\n", 24);
		if (ft_check_error(b, av[2]) == -2)
			write(1, "Stop : modulo by zero\n", 22);
		if (ft_check_error(b, av[2]) == -3)
			write(1, "0\n", 2);
		return (0);
	}
	ft_putnbr(ft_calc(a, b, av[2]));
	write(1, "\n", 1);
	return (0);
}
