/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:34:29 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/11 12:42:50 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

int ft_strcmp(char *s1, char *s2)
{
		int i;
		int j;

		i = ft_strlen(s1);
		j = ft_strlen(s2);
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
