/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 13:39:07 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/08 12:43:30 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_strrev(char *str)
{
	char	*str2;
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		str2[j] = str[i];
		j++;
		i--;
	}
	*str = *str2;
	return (str2);
}
