/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 02:32:19 by sopark            #+#    #+#             */
/*   Updated: 2016/11/02 02:38:14 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "abcd";
	char b[] = "bcde";
	char c[] = "cdef";
	char d[] = "defg";
	char key[] = "apple";
	char buffer[80];

	printf("%d\n", strcmp(a,b));
	printf("%d\n", strcmp(b,c));
	printf("%d\n", strcmp(c,d));
	printf("%d\n", strcmp(a,a));
	printf("%d\n", strcmp(d,c));

		do {
			printf ("Guess my favorite fruit? ");
			fflush (stdout);
			scanf ("%79s",buffer);
			}
	   	while (strcmp (key,buffer) != 0);
		    puts ("Correct answer!");
		return 0;
}
