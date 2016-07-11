/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 09:12:55 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/10 18:24:26 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = 1;
	result = 1;
	if (nb > 12)
	{
	return (0);
	}
	if (nb <= 0)
	{
	return (1);
	}

	while (nb != 0)
	{
	result = result * i;
	i++;
	nb--;
	}
	return (result);
}
