/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 01:21:32 by sopark            #+#    #+#             */
/*   Updated: 2016/11/08 22:18:38 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*end_space_trimmer(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		str[i] = '\0';
		i--;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		argv[1] = end_space_trimmer(argv[1]);
		while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
		i++;
		while (argv[1][i])
		{
			if (!((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32))
				write(1, &argv[1][i], 1);
			else
				write(1, "   ", 3);
			i++;			
		}
	}
	write(1, "\n", 1);
	return (0);
}
