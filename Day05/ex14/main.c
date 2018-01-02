/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:20:12 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 02:56:08 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char a[] = "";
	char b[] = "ABCD";
	char c[] = "abcD";
	char d[] = "AB3";
	char e[] = "ABC#";
	char f[] = "A B";

	printf("%d\n", ft_str_is_uppercase(a));
	printf("%d\n", ft_str_is_uppercase(b));
	printf("%d\n", ft_str_is_uppercase(c));
	printf("%d\n", ft_str_is_uppercase(d));
	printf("%d\n", ft_str_is_uppercase(e));
	printf("%d\n", ft_str_is_uppercase(f));
	return (0);
}
