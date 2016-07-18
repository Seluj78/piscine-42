/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 01:06:37 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/18 02:41:49 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if ((base % 2) == 0)
	{
		return (ft_collatz_conjecture(base / 2));
	}
	if ((base % 2) == 1)
	{
		return (ft_collatz_conjecture(base * 3 + 1));
	}
	return (0);
}
