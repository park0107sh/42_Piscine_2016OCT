/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 01:56:05 by sopark            #+#    #+#             */
/*   Updated: 2016/11/06 01:33:08 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char    *ft_strrev(char *str);

int        main(void)
{
	    char str[20] = "Hello";
	    char *ret;

	    printf("%s \n", str);

	    ret = ft_strrev(str);
										    
	    printf("%s \n", str);
	    printf("%s \n", ret);
}
