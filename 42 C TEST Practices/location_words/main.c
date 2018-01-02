/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:17:34 by sopark            #+#    #+#             */
/*   Updated: 2016/11/09 16:24:14 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		location_words(int i, char *str);

int		main(void)
{
	char a[] = "   man";
	char b[] = "   practice is virtue";

	printf("%d\n", location_words(0, a));
	printf("%d\n", location_words(0, b));
}	
