/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_rush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 01:19:10 by sopark            #+#    #+#             */
/*   Updated: 2016/11/13 20:26:04 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

int		which_rush(char *str)
{
	int i;
	int	rush_no;

	i = 0;
	if (str[0] == 'o')
		rush_no = 0;
	if (str[0] == '/')
		rush_no = 1;
	if (str[0] == 'A')
		rush_no = rush234test(str);
	while (str[i])
	{
		if (!(str[i] == 'o' || str[i] == 'A' || str[i] == '/'
					|| str[i] == 'B' || str[i] == 'C' || str[i] == 92
					|| str[i] == '*' || str[i] == '|' || str[i] == '-'
					|| str[i] == '\n' || str[i] == ' '))
			rush_no = 7;
		i++;
	}
	return (rush_no);
}
