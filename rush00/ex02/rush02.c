/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 15:27:39 by jyin              #+#    #+#             */
/*   Updated: 2016/10/30 19:16:05 by jyin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw(int dx, int dy, int dbx, int dby)
{
	if ((dx == 0 && dy == 0) || (dx == dbx - 1 && dy == 0))
	{
		ft_putchar('A');
	}
	else if ((dx == 0 && dy == dby - 1) || (dx == dbx - 1 && dy == dby - 1))
	{
		ft_putchar('C');
	}
	else if ((dy == 0 || dy == dby - 1) || (dx == 0 || dx == dbx - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int cx;
	int cy;

	cx = 0;
	cy = 0;
	while (cx != x && cy != y && x >= 0 && y >= 0)
	{
		ft_draw(cx, cy, x, y);
		cx++;
		if (cx == x)
		{
			cx = 0;
			ft_putchar('\n');
			cy++;
		}
	}
}
