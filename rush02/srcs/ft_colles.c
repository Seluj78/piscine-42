/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 21:27:01 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/23 22:17:53 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	ft_colle00_chars(int c, int cols, int lines)
{
	char i;

	i = ' ';
	if (c / (cols + 1) == 0 || c / (cols + 1) == lines - 1)
		i = '-';
	if (c % (cols + 1) == 0 || c % (cols + 1) == cols - 1)
		i = '|';
	if (c == 0 || c == cols - 1 || c == (cols + 1) * (lines - 1)
		|| c == (cols + 1) * lines - 2)
		i = 'o';
	if (c % (cols + 1) == cols)
		i = '\n';
	return (i);
}

char	ft_colle01_chars(int c, int cols, int lines)
{
	char i;

	i = ' ';
	if (c / (cols + 1) == 0 || c / (cols + 1) == lines - 1 ||
			c % (cols + 1) == 0 || c % (cols + 1) == cols - 1)
		i = '*';
	if (c == (cols + 1) * lines - 2)
		i = '/';
	if (c == cols - 1 || c == (cols + 1) * (lines - 1))
		i = '\\';
	if (c == 0)
		i = '/';
	if (c % (cols + 1) == cols)
		i = '\n';
	return (i);
}

char	ft_colle02_chars(int c, int cols, int lines)
{
	char i;

	i = ' ';
	if (c / (cols + 1) == 0 || c / (cols + 1) == lines - 1 ||
			c % (cols + 1) == 0 || c % (cols + 1) == cols - 1)
		i = 'B';
	if (c == (cols + 1) * (lines - 1) || c == (cols + 1) * lines - 2)
		i = 'C';
	if (c == 0 || c == cols - 1)
		i = 'A';
	if (c % (cols + 1) == cols)
		i = '\n';
	return (i);
}

char	ft_colle03_chars(int c, int cols, int lines)
{
	char i;

	i = ' ';
	if (c / (cols + 1) == 0 || c / (cols + 1) == lines - 1 ||
			c % (cols + 1) == 0 || c % (cols + 1) == cols - 1)
		i = 'B';
	if (c == cols - 1 || c == (cols + 1) * lines - 2)
		i = 'C';
	if (c == 0 || c == (cols + 1) * (lines - 1))
		i = 'A';
	if (c % (cols + 1) == cols)
		i = '\n';
	return (i);
}

char	ft_colle04_chars(int c, int cols, int lines)
{
	char i;

	i = ' ';
	if (c / (cols + 1) == 0 || c / (cols + 1) == lines - 1 ||
			c % (cols + 1) == 0 || c % (cols + 1) == cols - 1)
		i = 'B';
	if (c == (cols + 1) * lines - 2)
		i = 'A';
	if (c == cols - 1 || c == (cols + 1) * (lines - 1))
		i = 'C';
	if (c == 0)
		i = 'A';
	if (c % (cols + 1) == cols)
		i = '\n';
	return (i);
}
