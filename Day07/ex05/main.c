/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 22:35:58 by sopark            #+#    #+#             */
/*   Updated: 2016/11/04 02:01:51 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char **ft_split_whitespaces(char *str);
void ft_print_words_tables(char **tab);

int	main(void)
{
	int		tab[1];
	char	**c;
	char 	str[] = "  at    sadfaser   ede           ca  \n  fdtidnne";
	c = ft_split_whitespaces(str);
	/*while (*c){
	* 		printf("%s\n", *c);
	* 				c++;
	* 					}*/
	printf("##############\n");
	ft_print_words_tables(c);
	return (0);
}
