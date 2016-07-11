/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:56:22 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/11 12:31:31 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		if (str[i] != to_find[i] && str[j] != to_find[j])
		{
			return (&to_find[i]);
			i++;
			j++;
		}
		else
			return ("NULL");
	}
	return ("NULL");
}

int		main(void)
{
	char *c;

	c = ft_strstr("abcdefg", "def");
	ft_putstr(c);
	return (0);
}
