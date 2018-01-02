/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush234test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 01:56:24 by sopark            #+#    #+#             */
/*   Updated: 2016/11/13 18:21:36 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

int		rush234test(char *str)
{
	int i;
	int x_dm;
	int y_dm;
	int rush_no;
	int flag;

	i = 0;
	x_dm = x_dim(str);
	y_dm = y_dim(str);
	flag = 0;
	rush_no = 7;
	while (i++ <= x_dm)
		if (str[i - 1] == 'C')
			flag = 2;
	if (flag == 0)
		rush_no = 2;
	if (flag == 2)
	{
		if (str[(y_dm - 1) * (x_dm + 1) + (x_dm - 1)] == 'C')
			rush_no = 3;
		if (str[(y_dm - 1) * (x_dm + 1) + (x_dm - 1)] == 'A')
			rush_no = 4;
	}
	return (rush_no);
}
