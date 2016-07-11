/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:56:22 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/11 12:55:56 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		}
		i++;
		j++;
	}
	return ("NULL");
}
