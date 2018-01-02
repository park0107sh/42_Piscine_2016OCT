/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:47:34 by sopark            #+#    #+#             */
/*   Updated: 2016/11/15 16:07:39 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup_2(char *src)
{
	int i;
	int size;
	char *new_tab;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	new_tab = malloc(sizeof(char) * size);
	if (new_tab == NULL)
		return (NULL);
	while (i < size)
	{
		new_tab[i] = src[i];
		i++;
	}
	new_tab[size] = '\0';
	return (new_tab);
}
