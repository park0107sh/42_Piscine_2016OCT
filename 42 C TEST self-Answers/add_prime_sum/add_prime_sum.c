/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:22:45 by sopark            #+#    #+#             */
/*   Updated: 2016/11/11 15:22:38 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int num;

	i = 0;
	neg = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num*10;
		num = num + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		return (-num);
	return (num);
}

void	ft_putnbr(int nb)
{
	int long nc;

	nc = nb;
	if (nc < 0)
		ft_putchar('-');
	if (nc >= 10)
	{
		ft_putnbr(nc / 10);
		ft_putchar(nc % 10 + '0');
	}
	if (nc >= 0 && nc < 10)
		ft_putchar(nc + '0');
}

int		ft_is_prim(int nbr)
{
	int long ncr;
	int i;

	ncr = nbr;
	i = 2;
	while (i < ncr)
	{
		if (ncr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_add_prim_sum(int nbr)
{
	int long ncr;
	int i;
	int count;

	ncr = nbr;
	i = 2;
	count = 0;
	while (i <= ncr)
	{
		if (ft_is_prim(i))
			count = count + i;
		i++;
	}
	return (count);
}

int		main(int argc, char **argv)
{
	printf("%d\n", ft_atoi("42"));
	ft_putnbr(4245682);
	ft_putchar('\n');
	printf("%d\n", ft_is_prim(2));
	printf("%d\n", ft_is_prim(3));
	printf("%d\n", ft_is_prim(4));
	printf("%d\n", ft_is_prim(5));
	if (argc == 2 && ft_atoi(argv[1]) >= 0)
		ft_putnbr(ft_add_prim_sum(ft_atoi(argv[1])));
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
