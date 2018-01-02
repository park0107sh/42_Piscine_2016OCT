/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:09:51 by sopark            #+#    #+#             */
/*   Updated: 2016/11/05 18:08:53 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		find_max(char *str);
int		find_min(char *str);

int		main(void)
{
	int i;
	int j;
	int k;
	int l;
	char a[] = ".123548";
	char b[] = "..978652";

	printf("%d\n", find_max(a));
	printf("%d\n", find_min(b));
}
