/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:43:32 by sopark            #+#    #+#             */
/*   Updated: 2016/11/03 14:54:10 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int i;
	int *p;
	int min;
	int max;

	i = 0;
	min = 10;
	max = 30;
	p = ft_range(min, max);
	if (p)
		while (i < max - min)
		{
			printf("%d\n", p[i++]);
		}
	return (0);
}
