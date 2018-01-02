/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:11:14 by sopark            #+#    #+#             */
/*   Updated: 2016/11/03 19:25:53 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int i;
	int min;
	int max;
	int *range;

	range = 0;
	i = 0;
	min = 10;
	max = 30;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	while (i <= max)
	{
		printf("tabs[%d] =", i);
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
