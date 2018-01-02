/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:12:16 by sopark            #+#    #+#             */
/*   Updated: 2016/11/05 15:28:42 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*new_str;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	new_str = (char*)malloc(sizeof(*new_str) * (size));
	if (new_str == NULL)
		return (NULL);
	while (i < size)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[size] = '\0';
	return (new_str);
}
