/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:50:35 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 03:00:59 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[100] = "42";
	char src[20] = "isdope";

	ft_strcat(src, "asfk");
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
