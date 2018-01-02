/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 15:27:39 by jyin              #+#    #+#             */
/*   Updated: 2016/11/12 21:28:03 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_draw(int dx, int dy, int dbx, int dby)
{
	if ((dx == 0 && dy == 0) || (dx == 0 && dy == dby - 1))
	{
		ft_putchar('A');
	}
	else if ((dx == dbx - 1 && dy == dby - 1) || (dx == dbx - 1 && dy == 0))
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
	if (x == 0 && y == 0)
		ft_putchar('\n');
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

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int num;

	i = 0;
	neg = 0;
	num = 0;
	while (str[i] >= 0 && str[i] <= 32)
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		return (-num);
	else
		return (num);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	else
		ft_putchar('\n');
	return (0);
}
