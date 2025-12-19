/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:31:15 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/19 18:04:33 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*i;
	t_list	*j;
	t_list	*tmp;

	if (!begin_list)
		return ;
	i = begin_list;
	while (i)
	{
		j = i->next;
		while (j)
		{
			tmp = i->data;
			i->data = j->data;
			j->data = tmp;
			j = j->next;
		}
		i = i->next;
	}
}
