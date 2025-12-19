/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:02:58 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/19 13:34:35 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	ft_list		pre;
	ft_list		cur;
	ft_list		nxt;

	if (!begin_list || !*begin_list)
		return ;
	pre = NULL;
	cur = *begin_list;
	while (cur)
	{
		nxt = cur->next;
		cur->next = pre;
		pre = cur;
		cur = nxt;
	}
	*begin_list = pre;
}
