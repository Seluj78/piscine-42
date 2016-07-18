/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:23:24 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/18 02:35:09 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*array;
	int		i;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	array = malloc(sizeof(*array) * (max - min));
	if (array == 0)
	{
		range = 0;
		return (0);
	}
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	range = &array;
	return (max - min);
}
