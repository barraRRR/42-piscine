/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:11:08 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/19 19:26:00 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*node;
	t_list	*ptr;

	if (!begin_list || !cmp)
		return ;
	node = ft_create_elem(data);
	if (!node)
		return ;
	if (!*begin_list || cmp(data, (*begin_list)->data) < 0)
	{
		node->next = *begin_list;
		*begin_list = node;
		return ;
	}
	ptr = *begin_list;
	while (ptr->next && cmp(data, ptr->next->data) >= 0)
		ptr = ptr->next;
	node->next = ptr->next;
	ptr->next = node;
}
