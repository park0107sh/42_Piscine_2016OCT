/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:16:23 by sopark            #+#    #+#             */
/*   Updated: 2016/11/04 16:18:39 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int 	main(void)
{
	int i;
	int j;

	i = 1;
	j = 2;
	ft_swap(&i, &j);
	printf("%d\n", i);
	printf("%d\n", j);
}
