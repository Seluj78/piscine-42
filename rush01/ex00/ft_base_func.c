/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_func.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 17:58:21 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/17 22:37:43 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base_func.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putstr_space(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i + 1] == '\0')
		{
			ft_putchar(str[i]);
			return ;
		}
		ft_putchar(str[i]);
		ft_putchar(' ');
		i++;
	}
}

void	ft_print_sud(char **grille)
{
	int i;

	i = 0;
	while (i < 9)
	{
		ft_putstr_space(grille[i]);
		ft_putchar('\n');
		i++;
	}
}
