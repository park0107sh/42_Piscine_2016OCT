/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:13:04 by sopark            #+#    #+#             */
/*   Updated: 2016/11/01 18:22:36 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_uppercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}
