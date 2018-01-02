/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 02:05:23 by sopark            #+#    #+#             */
/*   Updated: 2016/11/06 02:13:18 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2);

int 	main(void)
{
	char *a;
	char s1[100];
	char s2[100];

	a = "Broppppppddddddddp";
	ft_strcpy(s2, a);
	printf("%s\n", s2);
	ft_strcpy(s1, s2);
	printf("%s\n", s1);
}
