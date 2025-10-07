/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:31:57 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:31:57 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_op(t_node **head)
{
	t_node	*penultimate_node;
	t_node	*last_node;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return ;
	penultimate_node = get_penultimate_node(*head);
	last_node = get_last_node(*head);
	penultimate_node->next = NULL;
	last_node->next = *head;
	(*head) = last_node;
	calculate_positions(*head);
}

void	rra(t_node **head)
{
	if (head == NULL || *head == NULL)
	{
		ft_printf("rra\n");
		return ;
	}
	reverse_rotate_op(head);
	ft_printf("rra\n");
}

void	rrb(t_node **head)
{
	if (head == NULL || *head == NULL)
	{
		ft_printf("rrb\n");
		return ;
	}
	reverse_rotate_op(head);
	ft_printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	if (a == NULL || *a == NULL)
	{
		ft_printf("rrr\n");
		return ;
	}
	reverse_rotate_op(a);
	if (b == NULL || *b == NULL)
	{
		ft_printf("rrr\n");
		return ;
	}
	reverse_rotate_op(b);
	ft_printf("rrr\n");
}
