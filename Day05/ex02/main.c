/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 21:06:05 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 04:22:16 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);
int		ft_putchar(char c);

int		main(void)
{
	char *a = "+-42";
	char *b = "3.141";
	char *c = "313311 with words";
	char *d = " WW2 ";

	printf("%d\n", ft_atoi(a));
	printf("%d\n", ft_atoi(b));
	printf("%d\n", ft_atoi(c));
	printf("%d\n", ft_atoi(d));
	return (0);
}
