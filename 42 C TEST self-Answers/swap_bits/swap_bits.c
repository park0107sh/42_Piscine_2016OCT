/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 02:40:04 by sopark            #+#    #+#             */
/*   Updated: 2016/11/15 19:46:20 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	int c;

	c = octet;
	c = ((c & 0xf0) >> 4) | ((c & 0x0f) << 4);
	return (c);
}

int		main(void)
{
	int x = 65;

	printf("%d\n", swap_bits(x));
}
