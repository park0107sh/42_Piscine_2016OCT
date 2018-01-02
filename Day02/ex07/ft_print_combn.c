/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 22:20:40 by sopark            #+#    #+#             */
/*   Updated: 2016/10/27 23:02:12 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	give_tab(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(48 + tab[i]);
		i++;
	}
}

void	og_tab(int n)
{
	int i;
   	int tab[n];
   	int m;

	m = n - 1;
	i = 0;
	tab[0] = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	give_tab(tab, n);
	while (m > 0)
	{
		while (tab[m] == (9 + m - (n - 1)) && m >= 0)
			m--;
		if (m < 0)
			break;
		tab[m]++;
		i = m + 1;
		while (i <= n)
		{
			tab[i] = tab[i - 1] + 1;
			i++;
		}
		m = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		give_tab(tab, n);
	}
}

void	ft_print_combn(int n)
{
	if (n < 0 || n > 10)
		return ;
	og_tab(n);
}
