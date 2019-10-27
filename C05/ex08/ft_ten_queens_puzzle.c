/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:36:27 by remekram          #+#    #+#             */
/*   Updated: 2019/08/14 12:24:37 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		absentsurligneicolonnej(char *grille[10], int i, int j)
{
	int k;

	k = 0;
	while (k < 10)
	{
		if (grille[i][k] == 1)
			return (0);
		k++;
	}
	k = 0;
	while (k < 10)
	{
		if (grille[k][j] == 1)
			return (0);
		k++;
	}
	return (1);
}

void	fit_line(char *grille[10], int i, int j)
{
	int c;

	c = 0;
	while (0 <= j && j < 4)
	{
		if (grille[i][j] == 1)
		{
			grille[i][j] = 0;
			fit_line(grille, i, j++);
		}
		if (absentSurLigneiColonnej(grille, i, j) == 1)
		{
			grille[i][j] = 1;
			c++;
			fit_line(grille, i, j++);
		}
		else
			j++;
	}
	if (c == 0)
		fit_line(grille, i--, 9);
}

void	fit_tab(char *grille[10])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (0 <= i && i < 9)
	{
		if (0 <= j && j < 10)
			fit_line(grille, i, j);
		if (j == 10)
		{
			j = 0;
			fit_line(grille, i++, j);
		}
		if (j == -1)
		{
			j = 0;
			fit_line(grille, i--, j);
		}
	}
}

int		main(void)
{
	char *grille[10];

	grille[0] = "0000000000";
	grille[1] = "0000000000";
	grille[2] = "0000000000";
	grille[3] = "0000000000";
	grille[4] = "0000000000";
	grille[5] = "0000000000";
	grille[6] = "0000000000";
	grille[7] = "0000000000";
	grille[8] = "0000000000";
	grille[9] = "0000000000";
	fit_tab(grille);
	return (0);
}
