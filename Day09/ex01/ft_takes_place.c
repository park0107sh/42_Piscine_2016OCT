/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:15:12 by sopark            #+#    #+#             */
/*   Updated: 2016/11/08 23:43:40 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int	h;

	h = hour;
	if (hour >= 12)
		h = (hour % 12);
	if ((h == 0) && (hour == 12))
		h = 12;
	printf("THE FOLLWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("12.00 A.M AND 1.00 A.M.\n");
	else if (hour < 11)
		printf("%d.00 A.M AND %d.00 A.M.\n", h, h + 1);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 24)
		printf("12.00 A.M AND 1.00 A.M.\n");
	else if (hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", h, (h + 1) % 12);
}
