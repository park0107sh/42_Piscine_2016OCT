/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:17:49 by sopark            #+#    #+#             */
/*   Updated: 2016/11/11 04:06:04 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int p;

	i = 1;
	p = 0;
	if (argc == 1 || argc > 2)
		ft_putchar('a');
	j = 0;
	if (argc == 2)
	{
		while (argv[1][j])
		{
			if (argv[1][j] == 'a')
			{
				ft_putchar('a');
				ft_putchar('\n');
				return (0);
			}
			j++;
		}
	}
	ft_putchar('\n');
	return (0);
}
