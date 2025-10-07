/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:32:02 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:32:03 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_op(t_node **dst, t_node **src)
{
	t_node	*temp;

	if (dst == NULL)
		return ;
	if (src == NULL || *src == NULL)
		return ;
	temp = *src;
	(*src) = (*src)->next;
	if (*dst != NULL)
		temp->next = (*dst);
	else
		temp->next = NULL;
	(*dst) = temp;
	calculate_positions(*dst);
	calculate_positions(*src);
}

void	pa(t_node **dst, t_node **src)
{
	if (src == NULL || *src == NULL)
	{
		ft_printf("pa\n");
		return ;
	}
	push_op(dst, src);
	ft_printf("pa\n");
}

void	pb(t_node **dst, t_node **src)
{
	if (src == NULL || *src == NULL)
	{
		ft_printf("pb\n");
		return ;
	}
	push_op(dst, src);
	ft_printf("pb\n");
}
