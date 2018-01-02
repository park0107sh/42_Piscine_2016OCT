/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:57:42 by sopark            #+#    #+#             */
/*   Updated: 2016/11/15 21:07:11 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	int n = 0;
	int i = 0;
	char a[] = "	adf	a	sf dask dkj \n dkjie \t y";
	char **b = ft_split_whitespaces(a);
	while (b[n] != 0)
	{
		i = 0;
		while (b[n][i] != '\0')
		{
			printf("%c", b[n][i]);
			i++;
		}
		printf("\n");
		n++;
	}
	free(b);
	return (0);
}
