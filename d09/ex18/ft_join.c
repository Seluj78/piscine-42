/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 14:59:10 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/15 15:01:33 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(char **tab)
{
	int size;
	int i;
	int k;

	size = 0;
	i = 0;
	k = 1;
	while (tab && tab[k])
	{
		while (tab && tab[k][i])
			i++;
		size += i + 1;
		k++;
		i = 0;
	}
	size += k;
	return (size);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		k;
	int		s;
	int		size;
	char	*str;

	i = 1;
	k = 0;
	s = 0;
	size = ft_size(tab);
	str = (char*)malloc(sizeof(char) * size + 2);
	while (s < (size - 1) && tab[i])
	{
		while (tab && tab[i][k])
			str[s++] = tab[i][k++];
		str[s++] = *sep;
		i++;
		k = 0;
	}
	str[s - 1] = '\0';
	return (str);
}
