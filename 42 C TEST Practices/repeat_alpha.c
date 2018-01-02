/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:20:57 by sopark            #+#    #+#             */
/*   Updated: 2016/11/04 17:13:10 by sopark           ###   ########.fr       */
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
	int k;

	i = 1;
	j = 0;
	k = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] >= 65 && argv[i][j] < 90)
			{
				p = argv[i][j];
				while (k < p - 64)
				{
					ft_putchar(argv[i][j]);
					k++;
				}
			}
			if (argv[i][j] >= 97 && argv[i][j] <= 122)
			{
				p = argv[i][j];
				while (k < p - 96)
				{
					ft_putchar(argv[i][j]);
					k++;
				}
			}
			else 
				ft_putchar(argv[i][j]);	
			j++;
			k = 0;
		}
		i++;
	}
	ft_putchar('\n');
}
