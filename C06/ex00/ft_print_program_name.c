/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 04:01:48 by remekram          #+#    #+#             */
/*   Updated: 2019/08/14 01:41:57 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int k;

	k = 0;
	while (str[k])
	{
		write(1, &str[k], 1);
		k++;
	}
}

int		main(int ac, char **av)
{
	int a;

	a = ac + 1;
	ft_putstr(av[0]);
	ft_putchar('\n');
	return (0);
}
