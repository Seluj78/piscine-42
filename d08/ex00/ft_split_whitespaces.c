/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 17:10:27 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/16 16:10:54 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		while (*str && (*str == '\t' || *str == ' ' || *str == '\n'))
			str++;
		if (*str && *str != '\t' && *str != ' ' && *str != '\n')
		{
			i++;
			while (*str && *str != '\t' && *str != ' ' && *str != '\n')
				str++;
		}
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && str[len] != '\t' && str[len] != ' ' && str[len] != '\n')
		len++;
	if (!(word = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < len)
		word[i] = str[i];
	word[i] = 0;
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		i;
	int		j;

	i = ft_count_words(str);
	if (!(result = (char **)malloc((i + 1) * sizeof(char *))))
		return (NULL);
	j = -1;
	while (*str)
	{
		while (*str && (*str == '\t' || *str == ' ' || *str == '\n'))
			str++;
		if (*str && *str != '\t' && *str != ' ' && *str != '\n')
			result[++j] = ft_strdup(str);
		while (*str && *str != '\t' && *str != ' ' && *str != '\n')
			str++;
	}
	result[i] = NULL;
	return (result);
}
