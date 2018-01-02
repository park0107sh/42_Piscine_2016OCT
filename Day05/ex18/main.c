/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:38:02 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 04:14:40 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void			ft_putnbr(int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[100] = "42 42 42 42 42";
	char src[100] = "is there for you";
	char src1[100] = "is there for you";

	ft_putnbr(ft_strlcat(src, "but it was a lie so you are trolled but don't let your hopes down", 30));
	printf("%s\n", src);
	//ft_strlcat(dest, src, 50);
	//printf("%s\n", dest);
	ft_putnbr(strlcat(src1, "but it was a lie so you are trolled but don't let your hopes down", 30));
	printf("%s\n", src1);
	return (0);
}
