/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 13:28:26 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 19:03:48 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_count_l(char *str)
{
	int i;
	int acc;

	i = 0;
	acc = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			acc++;
		i++;
	}
	return (acc);
}

int		ft_count_c(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (i);
}

int		ft_valid_input(char *str)
{
	return ((ft_count_l(str) != 0) && (ft_count_c(str) != 0));
}
