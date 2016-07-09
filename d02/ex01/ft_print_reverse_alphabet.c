/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 02:48:07 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/06 18:21:40 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int ascii;

	ascii = 122;
	while (ascii >= 97)
	{
		ft_putchar(ascii);
		ascii--;
	}
}
