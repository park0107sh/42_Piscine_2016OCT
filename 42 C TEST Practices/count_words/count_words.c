/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:03:16 by sopark            #+#    #+#             */
/*   Updated: 2016/11/09 18:45:22 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_words(char *str)
{
	int	count;
	int	prev;
	int i;

	i = 0;
	count = 0;
	prev = 0;
	while (str[i])
	{
		if (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && prev == 1)
			prev = 0;
		if (!((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && prev == 0)
		{
			count++;
			prev = 1;
		}
		i++;
	}
	return (count);
}
