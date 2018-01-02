/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:08:56 by sopark            #+#    #+#             */
/*   Updated: 2016/11/09 18:29:59 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		count_words(char *str);

int		main(void)
{
	char a[] = " This is Three ";
	char b[] = " This is the Four ";

	printf("%d\n", count_words(a));
	printf("%d\n", count_words(b));
}
