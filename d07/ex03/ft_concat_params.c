/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 18:22:29 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/14 22:09:08 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_total_lenght(char *argv[])
{
	int i;
	int len_total;

	i = 1;
	len_total = 0;
	while (argv[i] != '\0')
	{
		len_total += ft_strlen(argv[i]);
		i++;
	}
	return (len_total);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*all;

	i = 1;
	all = (char*)malloc(sizeof(char) * ft_total_lenght(argv) + argc);
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			all += argv[i][j];
			j++;
		}
		i++;
		all += '\n';
	}
	all += '\n';
	return (all);
}
