/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_import_stdin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 23:53:05 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/24 23:03:21 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_import_stdin(void)
{
	t_list	*list;
	char	buf;
	char	*str;
	int		i;

	list = NULL;
	str = NULL;
	i = 0;
	while (read(0, &buf, 1) > 0)
	{
		ft_push_list(&list, buf);
		i++;
	}
	str = ft_concat_list(list, i);
	return (str);
}
