/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:46:21 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 22:35:52 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char a[] = "aBc";
	char b[] = "abb";
	char c[] = "";
	char d[] = "";

	ft_strcmp(a, b);
	ft_strcmp(c, d);
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", ft_strcmp(c, d));
}
