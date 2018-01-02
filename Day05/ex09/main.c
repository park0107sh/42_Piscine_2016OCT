/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:24:19 by sopark            #+#    #+#             */
/*   Updated: 2016/11/01 16:58:22 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str[] = "I DO NOT CARE ABOUT YOU MOFOKOS";

	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}
