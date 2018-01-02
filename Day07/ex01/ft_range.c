/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:41:03 by sopark            #+#    #+#             */
/*   Updated: 2016/11/03 23:38:56 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*j;

	i = 0;
	if (min >= max)
		return (0);
	j = (int*)malloc(sizeof(*j) * (max - min));
	while (min < max)
	{
		j[i] = min;
		min++;
		i++;
	}
	return (j);
}
