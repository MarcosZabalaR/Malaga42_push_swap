/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:37:26 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/30 16:52:04 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "get_next_line.h"
# include "pipex.h"
# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define NOT_ASSIGNED -1
# define A 0
# define B 1
# define SRC 0
# define DST 1

typedef struct s_node
{
	int				value;
	int				index;
	int				position;
	int				cost;
	struct s_node	*next;
}					t_node;

// validations

void				validate_input(int argc, char **argv);
int					are_digits(const char *str);
int					are_duplicates(int *numbers, int current_index);

// moves

void				move_node_to_top(t_node **head, t_node *node[], int stack);
void				move_both_positive(t_node **a, t_node **b, t_node *node[],
						int nsrc);
void				move_both_negative(t_node **a, t_node **b, t_node *node[],
						int nsrc);
void				move_pos_and_neg(t_node **a, t_node **b, t_node *node[],
						int nsrc);

// nodes

t_node				*create_node(t_node *head, t_node node);
void				print_node(t_node *node);

// push swap

void				ft_error_with_message(char *error);
void				ft_simple_error(void);
int					*parse_input(int argc, char **argv, int *size);
char				*ft_join_args(int argc, char **argv);

// stacks

t_node				*init_stack(int *numbers, int size);
int					get_stack_len(t_node *head);
void				print_stack(char *name, t_node *head);
void				print_stacks(t_node *a, t_node *b);
int					is_stack_ordered(t_node *a, t_node *b);
void				sort_descending(t_node **head);
void				sort_ascending(t_node **head);
void				ft_free_stack(t_node *head);
t_node				*find_min_node_without_index(t_node *head);
void				set_stack_indexes(t_node *head);

// sort

void				sort(t_node **a, t_node **b);
void				operate(t_node **src, t_node **dst, t_node *node[],
						int nsrc);
int					is_stack_partially_ordered(t_node *head);
void				sort_3_nodes(t_node **head);

// operations

void				swap_op(t_node **head);
void				sa(t_node **head);
void				sb(t_node **head);
void				ss(t_node **a, t_node **b);
void				rotate_op(t_node **head);
void				ra(t_node **head);
void				rb(t_node **head);
void				rr(t_node **a, t_node **b);
void				reverse_rotate_op(t_node **head);
void				rra(t_node **head);
void				rrb(t_node **head);
void				rrr(t_node **a, t_node **b);
void				push_op(t_node **dst, t_node **src);
void				pa(t_node **dst, t_node **src);
void				pb(t_node **dst, t_node **src);
void				calculate_positions(t_node *head);
t_node				*get_penultimate_node(t_node *head);
t_node				*get_last_node(t_node *head);

#endif
