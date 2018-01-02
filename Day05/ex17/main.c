/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:14:00 by sopark            #+#    #+#             */
/*   Updated: 2016/11/01 20:42:34 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char dest[] = "42";
	char src[] = " is dope but ";

	printf("%s\n", src);
	ft_strncat(src, "asfk-op-", 6);
	printf("%s\n", src);
	printf("%s\n", dest);
	ft_strncat(dest, src, 11);
	printf("%s\n", dest);
	return (0);
}
