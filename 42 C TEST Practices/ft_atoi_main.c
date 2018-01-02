/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:48:51 by sopark            #+#    #+#             */
/*   Updated: 2016/11/06 15:54:01 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str);

int		main(void)
{
	char a[] = "+152 222";
	char b[] = "-123 1";
	char c[] = "123456	123";
	char d[] = "++123";
	char e[] = "--123";
	char f[] = "123456789";

	printf("%d\n", atoi(a));
	printf("%d\n", atoi(b));
	printf("%d\n", atoi(c));
	printf("%d\n", atoi(d));
	printf("%d\n", atoi(e));
	printf("%d\n", atoi(f));
	
	printf("%d\n", ft_atoi(a));
	printf("%d\n", ft_atoi(b));
	printf("%d\n", ft_atoi(c));
	printf("%d\n", ft_atoi(d));
	printf("%d\n", ft_atoi(e));
	printf("%d\n", ft_atoi(f));
}
