/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manipulate_lists.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 22:34:46 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 23:03:20 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

t_list		*ft_create_list(char c)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(*list));
	list->next = NULL;
	list->c = c;
	return (list);
}

void		ft_push_list(t_list **first, char c)
{
	t_list	*list;

	list = *first;
	if (!list)
	{
		*first = ft_create_list(c);
		return ;
	}
	while (list->next)
		list = list->next;
	list->next = ft_create_list(c);
}

char		*ft_concat_list(t_list *list, int len)
{
	int		i;
	char	*str;

	str = NULL;
	i = 0;
	if (list)
	{
		str = (char*)malloc(sizeof(*str) * (len + 1));
		while (i < len)
		{
			str[i] = list->c;
			list = list->next;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
