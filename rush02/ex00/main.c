/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 22:05:26 by sopark            #+#    #+#             */
/*   Updated: 2016/11/14 14:26:06 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

void	print_results(int n, int x, int y)
{
	if (n != 234 && n != 7)
	{
		ft_putstr("[rush-0");
		ft_putnbr(n);
		ft_putstr("] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putstr("]");
	}
	if (n == 234)
	{
		ft_putstr("[rush-02] [1] [1] || [rush-03] [1] [1]");
		ft_putstr(" || [rush-04] [1] [1]");
	}
	if (n == 7)
		ft_putstr("aucune");
}

void	rush_test(char *str)
{
	int		rush_no;
	int		x_dm;
	int		y_dm;

	x_dm = x_dim(str);
	y_dm = y_dim(str);
	if (x_dm == 1 && y_dm == 1)
		rush_no = which_rush_single(str);
	if ((x_dm >= 2 && y_dm >= 1) || (x_dm >= 1 && y_dm >= 2))
		rush_no = which_rush(str);
	if (x_dm == 0 || y_dm == 0)
		rush_no = 7;
	print_results(rush_no, x_dm, y_dm);
}

int		main(void)
{
	char	*tab;
	char	buf[1];
	int		i;

	i = 0;
	tab = (char*)malloc(sizeof(char) * 920107);
	while (read(0, buf, 1) && i < 920107)
	{
		tab[i] = *buf;
		i++;
	}
	tab[920107 - 1] = 0;
	if (*tab != 0)
		rush_test(tab);
	else
		ft_putstr("aucune");
	ft_putchar('\n');
	return (0);
}
