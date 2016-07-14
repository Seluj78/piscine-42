/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 21:43:47 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/14 21:53:03 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c, 1);
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

char	*ft_rot42(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))

		{
			str[i] = (((str[i] - 'a') + 42) % 26) + 'a';
		}

		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = (((str[i] - 'A') + 42) % 26) + 'A';
		}

		i++;
	}
	return(str);
}

int		main(int argc, char *argv[])
{
	char *str;

	(void)argc;
	str = ft_rot42(argv[1]);
	ft_putstr(str);
	return (0);
}
