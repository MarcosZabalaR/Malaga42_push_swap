/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:31:42 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:31:43 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_op(t_node **head)
{
	t_node	*temp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return ;
	temp = (*head)->next;
	(*head)->next = (*head)->next->next;
	temp->next = (*head);
	(*head) = temp;
	calculate_positions(*head);
}

void	sa(t_node **head)
{
	if (head == NULL || *head == NULL)
	{
		ft_printf("sa\n");
		return ;
	}
	swap_op(head);
	ft_printf("sa\n");
}

void	sb(t_node **head)
{
	if (head == NULL || *head == NULL)
	{
		ft_printf("sb\n");
		return ;
	}
	swap_op(head);
	ft_printf("sb\n");
}

void	ss(t_node **a, t_node **b)
{
	if (a == NULL || *a == NULL)
	{
		ft_printf("ss\n");
		return ;
	}
	swap_op(a);
	if (b == NULL || *b == NULL)
	{
		ft_printf("ss\n");
		return ;
	}
	swap_op(b);
	ft_printf("ss\n");
}
