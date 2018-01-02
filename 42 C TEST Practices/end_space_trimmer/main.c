/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:02:49 by sopark            #+#    #+#             */
/*   Updated: 2016/11/08 22:16:43 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*end_space_trimmer(char *str);
int		ft_strlen(char *str);

int		main(void)
{
	char a[] = " hihihi hello       ";
	printf("%s\n", end_space_trimmer(a));
}
