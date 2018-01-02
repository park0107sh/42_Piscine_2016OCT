/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 21:24:07 by sopark            #+#    #+#             */
/*   Updated: 2016/11/01 21:28:29 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[100] = "i will get";
	char src[100] = "get a job and so will the ones who work hard with warmth";

	ft_strlcpy(src, "oh yeah", 50);
	printf("%s\n", src);
	ft_strlcpy(dest, src, 70);
	printf("%s\n", dest);
	return (0);
}	
