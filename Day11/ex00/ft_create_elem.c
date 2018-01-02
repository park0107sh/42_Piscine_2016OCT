/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:49:50 by sopark            #+#    #+#             */
/*   Updated: 2016/11/11 13:40:21 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (new_list == NULL)
		return (NULL);
	if (new_list)
	{
		new_list->data = data;
		new_list->next = NULL;
	}
	return (new_list);
}
