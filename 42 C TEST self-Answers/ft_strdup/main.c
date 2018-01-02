/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:18:49 by sopark            #+#    #+#             */
/*   Updated: 2016/11/15 16:07:49 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup_2(char *src);
char	ft_putstr(char *src);

int		main(void)
{
	char str[] = "hello there";
	char *str2;

	str2 = ft_strdup_2(str);
	ft_putstr(str2);
	return (0);
}
