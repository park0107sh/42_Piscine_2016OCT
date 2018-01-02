/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:23:04 by sopark            #+#    #+#             */
/*   Updated: 2016/11/11 16:25:24 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		count_words(char *str)
{
	int count;
	int prev;
	int i;

	i = 0;
	count = 0;
	prev = 0;
	while (str[i])
	{
		if (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && prev == 1)
			prev = 0;
		if (!((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && prev == 0)
		{
			prev = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int		word_length(int i, char *str)
{
	int init;

	init = i;
	while (str[i] && !((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	return (i - init);
}

int		location_words(int i, char *str)
{
	int j;

	j = 0;
	while (str[j])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		else
			return (i);
		j++;
	}
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

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int p;
	int size;
	char **new_tab;

	if (argc == 2)
	{
		i = 0;
		p = 0;
		new_tab = (char**)malloc(sizeof(char*) * (count_words(argv[1]) + 1));
		while (i < count_words(argv[1]))
		{
			j = 0;
			p = location_words(p, argv[1]);
			size = word_length(p, argv[1]);
			new_tab[i] = (char*)malloc(sizeof(char) * (size + 1));
			while (j < size)
			{
				new_tab[i][j] = argv[1][p];
				j++;
				p++;
			}
			new_tab[i][j] = '\0';
			i++;
		}
		new_tab[count_words(argv[1])] = new_tab[0];
		new_tab[count_words(argv[1]) + 1] = 0;
		if (count_words(argv[1]) == 1)
			ft_putstr(new_tab[1]);
		else
		{
			i = 1;
			while (new_tab[i])
			{
				ft_putstr(new_tab[i]);
				ft_putchar(' ');
				i++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
