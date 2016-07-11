/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 14:28:45 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/09 17:08:18 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power = 0)
	{
		return (1);
	}
	while (power > 0)
	{
		nb = nb * nb;
		power--;
	}
	return (nb);
}
