/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 12:34:37 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/14 19:50:46 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int j;
	int *k;

	if (min >= max)
		return (0);
	k = (int*)malloc(sizeof(*k) * (max - min));
	j = 0;
	while (min < max)
	{
		k[j] = min;
		j++;
		min++;
	}
	return (k);
}
