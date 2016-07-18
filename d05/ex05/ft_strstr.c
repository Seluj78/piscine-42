/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:56:22 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/12 22:05:14 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp;
	char	*a;
	char	*b;

	if (*to_find == 0)
		return (str);
	tmp = str;
	while (*tmp)
	{
		a = tmp;
		b = to_find;
		while (*tmp && *b && *tmp == *b)
		{
			++tmp;
			++b;
		}
		if (*b == 0)
			return (a);
		tmp = a + 1;
	}
	return (0);
}
