/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:24:26 by sopark            #+#    #+#             */
/*   Updated: 2016/11/01 19:49:37 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_printable(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_printable(str[i])))
			return (0);
		i++;
	}
	return (1);
}
