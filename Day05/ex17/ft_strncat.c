/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:59:02 by sopark            #+#    #+#             */
/*   Updated: 2016/11/01 21:01:13 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int size;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
		size++;
	while ((src[i] != '\0') && (i < nb))
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
