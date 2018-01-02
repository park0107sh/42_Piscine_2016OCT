/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 00:41:29 by sopark            #+#    #+#             */
/*   Updated: 2016/11/01 19:37:09 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[50];
	char src[50];

	ft_strncpy(src, "Let's Get It 42", 15);
	ft_strncpy(dest, src, 13);
	printf("%s\n", dest);
	return (0);
}
