/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:27:32 by sopark            #+#    #+#             */
/*   Updated: 2016/11/05 18:08:34 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

int		find_min(char *str)
{
	int i;
	int j;
	int min;

	i = 0;
	j = 0;
	min = '9';
	while (str[j])
	{
		if (str[i] == '.' || str[i+1] == '.' || str[i+2] == '.')
			i++;
		if (str[i] == '.' || str[i+1] == '.' || str[i+2] == '.')
			i++;
		if (str[i] == '.' || str[i+1] == '.' || str[i+2] == '.')
			i++;
		while (i < ft_strlen(str))
		{
			if (min > str[i])
				min = str[i];
			i++;
		}
		j++;
	}
	return (min - 48);
}
