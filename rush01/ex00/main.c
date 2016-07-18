/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 09:27:18 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/17 22:52:29 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base_func.h"
#include "ft_base_func2.h"
#include "ft_sudoku.h"

void	main2(char **grille, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i <= 9)
	{
		grille[j] = argv[i];
		i++;
		j++;
	}
}

int		main(int argc, char **argv)
{
	char	**grille;
	t_bool	not_enough;

	not_enough = TRUE;
	grille = (char**)malloc(sizeof(91));
	if (check(argc, argv) == FALSE)
		return (0);
	main2(grille, argv);
	not_enough = ft_is_args_valide(grille);
	if (argc != 10 || (check_args(grille)) < 17 || not_enough == TRUE)
	{
		ft_putstr("Erreur");
		ft_putchar('\n');
		return (0);
	}
	sudoku_solver(grille, 0);
	ft_print_sud(grille);
	return (0);
}
