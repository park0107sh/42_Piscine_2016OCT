/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:29:46 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 02:58:58 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char a[] = "";
	char b[] = "12*#$%^&&*()~78945dkjklpeirjJDIJFOIJAERP}{Pzkj^";
	char c[] = "     ";

//testing non-printable would require non-char input, so I need something else to test, but i ll pass for now.
	printf("%d\n", ft_str_is_printable(a));
	printf("%d\n", ft_str_is_printable(b));
	printf("%d\n", ft_str_is_printable(c));
	return (0);
}
