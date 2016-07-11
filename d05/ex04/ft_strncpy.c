/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 07:22:07 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/11 10:55:49 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */i

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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(src);
	if (j < n)
	{
		while(src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
			n--;
		}
		while(n >= 0)
		{
			dest[i] = '\0';
			i++
		}

	}
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	dest[i] = '\0';
}
