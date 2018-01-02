/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 13:44:26 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 03:48:57 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char *a;
	char *b;
	char *c;
	char *d;

	a = "Hello A world";
	b = "Hello A world";
	c = "Hella damn";
	d = "Hello B zorld";
	printf("%d\n", ft_strncmp(a, b, 4)); // 0
	printf("%d\n", ft_strncmp(a, b, 5)); // 0
	printf("%d\n", ft_strncmp(a, b, 20)); // 0
	printf("%d\n", ft_strncmp(a, b, 6)); // -1
	printf("%d\n", ft_strncmp(d, a, 8)); // 1
	printf("%d\n", ft_strncmp(c, a, 8)); // -1
	printf("%d\n", ft_strncmp(c, a, 4)); // -1
	return (0);
}
