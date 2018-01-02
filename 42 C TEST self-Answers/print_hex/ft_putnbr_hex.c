/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:40:47 by sopark            #+#    #+#             */
/*   Updated: 2016/11/15 20:55:38 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(const char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int long nc;

	nc = nb;
	if (nc < 0)
	{	
		ft_putchar('-');
		nc = (-1)*nc;
	}
	if (nc >= 16)
	{
		ft_putnbr(nc / 16);
		ft_putnbr(nc % 16);
	}
	if (nc >= 10 && nc < 16)
		ft_putchar(nc + 87);
	else if (nc >= 0 && nc < 10)
		ft_putchar(nc + 48);
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	
	if (ac == 2)
	{
		i = ft_atoi(av[1]);
		printf("%d\n", i);
		ft_putnbr(i);
	}
	write(1, "\n", 1);
	return (0);
}
