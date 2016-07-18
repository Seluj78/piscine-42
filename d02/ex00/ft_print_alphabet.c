/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/05 22:03:40 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/07 10:30:16 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int ascii;

	ascii = 97;
	while (ascii <= 122)
	{
		ft_putchar(ascii);
		ascii++;
	}
}
