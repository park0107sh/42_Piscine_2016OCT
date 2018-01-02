/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 17:39:19 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 02:52:02 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_str_is_alpha(char *str);

int		main(void)
{
	char a[] = "hello";
	char b[] = "hello?";
	char c[] = "HeLlo";
	char d[] = "what?! +- #";

	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	printf("%d\n", ft_str_is_alpha(c));
	printf("%d\n", ft_str_is_alpha(d));
	return (0);
}
