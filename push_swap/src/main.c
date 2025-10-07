/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:32:22 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:32:23 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*numbers;
	t_node	*a;
	t_node	*b;
	int		size;

	validate_input(argc, argv);
	numbers = parse_input(argc, argv, &size);
	a = init_stack(numbers, size);
	b = NULL;
	sort(&a, &b);
	free(numbers);
	ft_free_stack(a);
	return (0);
}
