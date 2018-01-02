/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:27:21 by sopark            #+#    #+#             */
/*   Updated: 2016/11/13 01:09:16 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int i;
	char *tab;
	char buf[1];

	i = 0;
	tab = malloc(sizeof(char)*100);
	if (argc == 1)
	{
		while (read(0, buf, 1) && i < 101)
		{
			tab[i] = *buf;
			i++;
		}
		i = 0;
		while (i < 101)
		{
			printf("%d\n", tab[i]);
			i++;
		}
	}
}
