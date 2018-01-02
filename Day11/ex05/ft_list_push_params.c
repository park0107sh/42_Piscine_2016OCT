/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:52:26 by sopark            #+#    #+#             */
/*   Updated: 2016/11/09 21:33:30 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*new_list;

	i = 2;
	if (ac <= 1)
		return (NULL);
	new_list = ft_create_elem(av[1]);
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = new_list;
		new_list = list;
		i++;
	}
	return (new_list);
}
