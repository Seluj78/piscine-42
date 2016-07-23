/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 16:21:01 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/18 16:29:56 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*returnval;
	int	i;

	i = 0;
	returnval = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		returnval[i] = f(tab[i]);
		i++;
	}
	return (returnval);
}
