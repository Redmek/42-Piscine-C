/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 00:40:58 by remekram          #+#    #+#             */
/*   Updated: 2019/08/14 11:25:11 by remekram         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int k;
	int l;

	k = 0;
	l = 0;
	while ((s1[k] != '\0' || s2[k] != '\0') && l == 0)
	{
		if (s1[k] != s2[k])
			l = (s1[k] - s2[k]);
		k++;
	}
	return (l);
}

void	ft_sort_tab(int ac, char **av)
{
	int			i;
	char		*swap;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			swap = av[i];
			av[i] = av[i + 1];
			av[i + 1] = swap;
			i = 0;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int k;

	k = 1;
	ft_sort_tab(ac, av);
	while (k < ac)
	{
		ft_putstr(av[k]);
		write(1, "\n", 1);
		k++;
	}
	return (0);
}
