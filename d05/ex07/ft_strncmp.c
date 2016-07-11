/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:57:41 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/11 13:10:40 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str, unsigned int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0' || n > 0)
	{
		i++;
		j++;
		n--;
	}
	return (j);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;

	i = ft_strlen(s1, n);
	j = ft_strlen(s2, n);
	if (i > j)
	{
		return (1);
	}
	else if (i = j)
	{
		return (0);
	}
	else if (i < j)
	{
		return (-1);
	}
}
