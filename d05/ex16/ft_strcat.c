/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 15:40:23 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/11 15:48:11 by jlasne           ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;
	int idest;
	int isrc;

	idest = ft_strlen(dest);
	isrc = ft_strlen(src);
	i = 0;
	j = idest;

	while(src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[i] = '\n';

}
