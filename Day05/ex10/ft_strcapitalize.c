/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:30:54 by sopark            #+#    #+#             */
/*   Updated: 2016/11/01 17:32:25 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (str[i - 1] < '0')
				str[i] = str[i] - 32;
			else if (str[i - 1] > '9' && str[i - 1] < 'A')
				str[i] = str[i] - 32;
			else if (str[i - 1] > 'Z' && str[i - 1] < 'a')
				str[i] = str[i] - 32;
			else if (str[i - 1] > 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
