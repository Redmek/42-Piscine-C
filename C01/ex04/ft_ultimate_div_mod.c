/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 00:15:56 by remekram          #+#    #+#             */
/*   Updated: 2019/08/06 00:25:42 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	int i;
	int j;

	i = *a;
	j = *b;
	div = i / j;
	mod = i % j;
	*a = div;
	*b = mod;
}
