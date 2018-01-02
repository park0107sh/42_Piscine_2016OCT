/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 00:22:09 by sopark            #+#    #+#             */
/*   Updated: 2016/11/01 15:23:03 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char some[12];
	char dest[100];
	char src[100];

	ft_strcpy(src, "Let's get it 42");
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	printf("%s\n", some);
	return (0);
}
