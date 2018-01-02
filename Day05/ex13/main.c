/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:08:08 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 02:55:15 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char a[] = "";
	char b[] = "abcdefghijklmnopqrstuvwxyz";
	char c[] = "aBcd";
	char d[] = "abcde1";
	char e[] = "abcd#";

	printf("%d\n", ft_str_is_lowercase(a));
	printf("%d\n", ft_str_is_lowercase(b));
	printf("%d\n", ft_str_is_lowercase(c));
	printf("%d\n", ft_str_is_lowercase(d));
	printf("%d\n", ft_str_is_lowercase(e));
	return (0);
}
