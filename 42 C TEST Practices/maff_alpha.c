/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:53:35 by sopark            #+#    #+#             */
/*   Updated: 2016/11/04 15:30:37 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int		i;
	char	a;

	i = 0;
	a = 'a';

	while (i < 26)
	{
		if (i % 2 != 0)
			ft_putchar(a + i - 32);
		else
			ft_putchar(a + i);
		i++;
	}
	ft_putchar('\n');
}
