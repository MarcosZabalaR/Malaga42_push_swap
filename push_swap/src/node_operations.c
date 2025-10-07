/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:32:10 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:32:11 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(t_node *head, t_node node)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
	{
		ft_free_stack(head);
		ft_simple_error();
	}
	new_node->value = node.value;
	new_node->index = node.index;
	new_node->position = node.position;
	new_node->next = node.next;
	return (new_node);
}

void	print_node(t_node *node)
{
	if (node == NULL)
		ft_printf(" NULL ->\tNULL\n");
	else if (node->next != NULL)
		ft_printf(" [%d|%d|%d]: %d ->\t%d\n", node->position, node->index,
			node->cost, node->value, node->next->value);
	else
		ft_printf(" [%d|%d|%d]: %d ->\tNULL\n", node->position, node->index,
			node->cost, node->value);
}
