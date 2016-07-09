/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 09:12:55 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/08 13:11:10 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = 1;
	result = 1;
	if (nb > 12 || nb <= 0)
	{
	return (0);
	}

	while (nb != 0)
	{
	result = result * i;
	i++;
	nb--;
	}
	return (result);
}
