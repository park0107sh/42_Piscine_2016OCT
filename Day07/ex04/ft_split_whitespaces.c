/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:16:30 by sopark            #+#    #+#             */
/*   Updated: 2016/11/15 21:06:27 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ct_word(char *str)
{
	int ct;
	int i;
	int prev;

	i = 0;
	ct = 0;
	prev = 0;
	while (str[i])
	{
		if ((str[i] == '\n' || str[i] == ' ' || str[i] == '\t') && prev == 1)
			prev = 0;
		if ((str[i] != '\n' && str[i] != ' ' && str[i] != 't') && prev == 0)
		{
			prev = 1;
			ct++;
		}
		i++;
	}
	return (ct);
}

int		loc_word(int i, char *str)
{
	int j;

	j = 0;
	while (str[j])
	{
		if (str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
			i++;
		else
			return (i);
		j++;
	}
	return (i);
}

int		base_length(int i, char *str)
{
	int init;

	init = i;
	while (str[i] && str[i] != '\n' && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i - init);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	**farray;

	i = 0;
	k = 0;
	farray = (char**)malloc(sizeof(char*) * (ct_word(str) + 1));
	while (i < ct_word(str))
	{
		j = 0;
		k = loc_word(k, str);
		size = base_length(k, str);
		farray[i] = (char*)malloc(sizeof(char) * (size + 1));
		while (j < size)
			farray[i][j++] = str[k++];
		farray[i][j] = '\0';
		i++;
	}
	farray[ct_word(str)] = 0;
	return (farray);
}
