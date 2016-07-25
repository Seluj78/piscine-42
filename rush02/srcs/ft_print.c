/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:45:03 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/24 23:03:23 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_print_results(char *str)
{
	int		results;
	int		i;
	int		*arr;

	arr = ft_find_matches(str);
	results = ft_number_results(arr);
	if (results == 0)
		ft_putstr("aucune");
	else
	{
		i = 0;
		while (arr[i] == 0)
			i++;
		ft_print_result(i, ft_count_c(str), ft_count_l(str));
		i++;
		while (i < 5)
		{
			if (arr[i] != 0)
			{
				ft_putstr(" || ");
				ft_print_result(i, ft_count_c(str), ft_count_l(str));
			}
			i++;
		}
	}
}
