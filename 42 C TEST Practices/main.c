/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:05:30 by sopark            #+#    #+#             */
/*   Updated: 2016/11/04 16:14:59 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2);

int		main(void)
{
	char s1[10];
	char s2[20];

	ft_strcpy(s2, "hello");
	ft_strcpy(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	return (0);
}
