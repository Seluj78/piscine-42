/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_func2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 15:53:23 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/17 22:52:17 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base_func.h"

t_bool	check(int ac, char **av, int y)
{
	int j;
	int i;

	y = 0;
	while (y <= ac - 1)
	{
		i = 0;
		while (av[y][i] != '\0')
		{
			j = 0;
			while (j <= 9)
			{
				if ((av[y][j] >= '1' && av[y][j] <= '9') &&
						(av[y][j] == av[y][i]) && (i != j))
				{
					write(1, "Erreur\n", 7);
					return (FALSE);
				}
				j++;
			}
			i++;
		}
		y++;
	}
	return (TRUE);
}

int		check_args(char **grille)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	while (x < 9)
	{
		while (y <= 9)
		{
			if (grille[x][y] >= '0' && grille[x][y] <= '9')
				i++;
			y++;
		}
		y = 0;
		x++;
	}
	return (i);
}

t_bool	ft_is_args_valide(char **grille)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 9)
	{
		if (ft_strlen(grille[x]) != 9)
			return (TRUE);
		while (y < 9)
		{
			if (grille[x][y] == '.' || (grille[x][y] > '0' &&
						grille[x][y] <= '9'))
				y++;
			else
				return (TRUE);
		}
		y = 0;
		x++;
	}
	return (FALSE);
}
