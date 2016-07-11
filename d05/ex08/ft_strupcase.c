/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 13:11:17 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/11 13:23:57 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\n')
	{
		str[i] += 32;
		i++;
	}
	return (*str);
}