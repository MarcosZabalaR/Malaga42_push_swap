/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:30:11 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:30:15 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validate_quantity(int argc, char **argv)
{
	int		i;

	if (argc < 2)
		ft_simple_error();
	i = 0;
	while (++i < argc)
	{
		if (ft_is_str_empty(argv[i]))
			ft_simple_error();
	}
}

void	validate_multiple_args(int argc, char **argv)
{
	int		size;
	int		i;

	if (argc > 2)
	{
		i = 0;
		while (++i < argc)
		{
			size = ft_count_words(argv[i], ' ');
			if (size > 1)
				ft_simple_error();
		}
	}
}

void	validate_types(int n, char **args)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (ft_strlen(args[i]) >= 10 && ft_strcmp(args[i], "2147483647") > 0)
		{
			ft_free_double_ptr(args);
			ft_simple_error();
		}
		if (args[i][0] == '-' && ft_strlen(args[i]) >= 11 && ft_strcmp(args[i],
				"-2147483648") > 0)
		{
			ft_free_double_ptr(args);
			ft_simple_error();
		}
		if (!are_digits(args[i]))
		{
			ft_free_double_ptr(args);
			ft_simple_error();
		}
		i++;
	}
}

void	validate_duplicates(int n, char **args)
{
	int	i;
	int	*numbers;

	numbers = (int *)malloc(n * sizeof(int));
	if (numbers == NULL)
	{
		ft_free_double_ptr(args);
		ft_simple_error();
	}
	i = -1;
	while (++i < n)
	{
		numbers[i] = ft_atoi(args[i]);
		if (are_duplicates(numbers, i))
		{
			ft_free_double_ptr(args);
			if (numbers)
				free(numbers);
			ft_simple_error();
		}
	}
	free(numbers);
}

void	validate_input(int argc, char **argv)
{
	int		n;
	char	**args;
	char	*input;

	validate_quantity(argc, argv);
	validate_multiple_args(argc, argv);
	if (argc > 2)
		input = ft_join_args(argc, argv);
	else
		input = ft_strdup(argv[1]);
	args = ft_split(input, ' ');
	n = ft_count_words(input, ' ');
	free(input);
	validate_types(n, args);
	validate_duplicates(n, args);
	ft_free_double_ptr(args);
}
