/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:39:59 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 02:43:09 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str[] = "+hey, do you like to smoke and drink? Come to 42 and enjoy 420; beer+cig+party";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
