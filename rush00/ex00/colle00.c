/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 22:40:16 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/09 16:21:27 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_write_hb(int x)
{
	ft_putchar('o');
	while ((x - 2) > 0)
	{
		ft_putchar('-');
		x--;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	ft_write_middle(int x, int y, int x2)
{
	while ((y - 2) > 0)
	{
		x = x2;
		ft_putchar('|');
		while ((x - 2) > 0)
		{
			ft_putchar(' ');
			x--;
		}
		ft_putchar('|');
		ft_putchar('\n');
		y--;
	}
}

int		exeptions(int x, int y, int y2)
{
	if ((x < 0) || (y < 0))
	{
		return (0);
	}
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		return (0);
	}
	if (x == 1)
	{
		y = y2;
		ft_putchar('o');
		ft_putchar('\n');
		while ((y - 2) > 0)
		{
			ft_putchar('|');
			ft_putchar('\n');
			y--;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
	return (1);
}

void	ft_write_square(int x, int y, int x2, int y2)
{
	if ((x > 1) && (y > 1))
	{
		ft_write_hb(x);
		y = y2;
		x = x2;
		ft_write_middle(x, y, y2);
		x = x2;
		ft_write_hb(x);
	}
}

int		colle(int x, int y)
{
	int x2;
	int y2;
	int a;

	a = 1;
	x2 = x;
	y2 = y;
	a = exeptions(x, y, y2);
	if ((y == 1) && (a != 0))
	{
		x = x2;
		ft_putchar('i');
		while ((x - 2) > 0)
		{
			ft_putchar('-');
			x--;
		}
		ft_putchar('o');
	}
	return (0);
}
