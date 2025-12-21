/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:07:52 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/20 21:11:53 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree		*node;

	node = malloc(sizeof(t_btree));
	if (!node)
		return (NULL);
	node->item = item;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
