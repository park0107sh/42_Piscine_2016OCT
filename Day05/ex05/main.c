/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 01:17:45 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 02:34:03 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "This is a simple string";
	char *pch;
	char *lpk;

	pch = strstr(str, "simple");
	puts(pch);
	lpk = ft_strstr(str, "simple");
	puts(lpk);

	return (0);
}
