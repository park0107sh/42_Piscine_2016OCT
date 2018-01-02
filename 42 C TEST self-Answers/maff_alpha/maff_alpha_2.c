/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 01:19:21 by sopark            #+#    #+#             */
/*   Updated: 2016/11/06 01:26:35 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;
	char a;
	char b;

	i = 0;
	a = 'a';
	b = 'B';
	while (i < 26)
	{
		ft_putchar(a + i);
		ft_putchar(b + i);
		i = i + 2;
	}
	ft_putchar('\n');
}
