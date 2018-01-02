/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:38:21 by sopark            #+#    #+#             */
/*   Updated: 2016/11/13 22:29:37 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		p;
	int		size;
	char	*str;

	size = get_size(argc, argv);
	str = (char*)malloc(sizeof(char) * (size + 1));
	i = 1;
	p = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[p++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[p++] = '\n';
		i++;
	}
	str[p] = '\0';
	return (str);
}

int		get_size(int argc, char **argv)
{
	int	i;
	int	j;
	int size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			size++;
			j++;
		}
		i++;
	}
	if (argc > 2)
		size += argc - 2;
	return (size);
}
