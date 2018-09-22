/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:41:53 by sopark            #+#    #+#             */
/*   Updated: 2016/11/11 15:42:23 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;