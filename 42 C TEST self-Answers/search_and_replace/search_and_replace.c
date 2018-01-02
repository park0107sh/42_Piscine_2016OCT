/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:21:38 by sopark            #+#    #+#             */
/*   Updated: 2016/11/06 16:51:06 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (*str);
}

int		main(int argc, char **argv)
{
	int i;
	int t;
	int p;

	i = 0;
	t = 0;
	p = 0;
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
				{
					t = i;
					p = 1;
				}
				if (p == 1)
					argv[1][t] = argv[3][0];
				p = 0;
				i++;
			}
		}
		ft_putstr(argv[1]);
	}
	ft_putchar('\n');
}
