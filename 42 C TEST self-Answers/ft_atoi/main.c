/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 02:30:58 by sopark            #+#    #+#             */
/*   Updated: 2016/11/06 02:54:53 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char *str);

int		main(void)
{
	char a[] = "+543 216-48 324";
	char b[] = "-11 111";

	printf("%d\n", atoi(a));
	printf("%d\n", ft_atoi(a));
	printf("%d\n", atoi(b));
	printf("%d\n", ft_atoi(b));
}
