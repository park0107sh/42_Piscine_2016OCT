/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 01:09:26 by sopark            #+#    #+#             */
/*   Updated: 2016/11/11 16:35:19 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int k;
	char t;

	i = 0;
	k = ft_strlen(str) - 1;
	while (i < k)
	{
		t = str[i];
		str[i] = str[k];
		str[k] = t;
		i++;
		k--;
	}
	return (str);
}
