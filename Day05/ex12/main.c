/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 17:53:53 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 02:54:52 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char a[] = "";
	char b[] = "12341215%";
	char c[] = "hel123";
	char d[] = "12090841";
	char e[] = "12 831242";

	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n", ft_str_is_numeric(b));
	printf("%d\n", ft_str_is_numeric(c));
	printf("%d\n", ft_str_is_numeric(d));
	printf("%d\n", ft_str_is_numeric(e));
	return (0);
}
