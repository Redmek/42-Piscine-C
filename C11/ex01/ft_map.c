/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:42:20 by remekram          #+#    #+#             */
/*   Updated: 2019/08/21 19:57:07 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int k;
	int *str;

	k = 0;
	if (!(str = (int *)malloc(sizeof(int) * length)))
		return (0);
	while (k < length)
	{
		str[k] = f(tab[k]);
		k++;
	}
	return (str);
}
