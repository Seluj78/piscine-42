/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 19:06:56 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/17 22:18:29 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base_func.h"

t_bool	missing_on_square(int i, char **grille, int x, int y)
{
	int x2;
	int y2;

	x2 = 3 * (x / 3);
	y2 = 3 * (y / 3);
	x = x2;
	y = y2;
	while (x < x2 + 3)
	{
		while (y < y2 + 3)
		{
			if (grille[x][y] == i)
				return (FALSE);
			y++;
		}
		x++;
	}
	return (TRUE);
}

t_bool	missing_on_column(int i, char **grille, int y)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grille[j][y] == i)
			return (FALSE);
		j++;
	}
	return (TRUE);
}

t_bool	missing_on_line(char i, char **grille, int x)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grille[x][j] == i)
			return (FALSE);
		j++;
	}
	return (TRUE);
}

t_bool	sudoku_solver(char **grille, int pos)
{
	int		x;
	int		y;
	char	i;

	i = '1';
	x = pos / 9;
	y = pos % 9;
	if (pos == 81)
		return (TRUE);
	if (grille[x][y] != '.')
		return (sudoku_solver(grille, pos + 1));
	while (i <= '9')
	{
		if (missing_on_line(i, grille, x) && missing_on_column(i, grille, y) &&
				missing_on_square(i, grille, x, y))
		{
			grille[x][y] = i;
			if (sudoku_solver(grille, pos + 1))
				return (TRUE);
		}
		i++;
	}
	grille[x][y] = '.';
	return (FALSE);
}
