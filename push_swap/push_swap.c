/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:48:10 by haqajjef          #+#    #+#             */
/*   Updated: 2025/03/02 10:38:51 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	ft_exit(1);
}

static void	process_input(int ac, char **av, t_pile **stack_a)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (is_empty(av[i]) == -1)
			error();
		parse_input(av[i], stack_a);
		i++;
	}
}

static void	sort_stacks(t_pile **stack_a, t_pile **stack_b)
{
	if (!is_sort(stack_a))
	{
		if (len_stack(*stack_a) <= 5)
			sort(stack_a, stack_b, len_stack(*stack_a));
		else
		{
			index_stack(*stack_a);
			first(stack_a, stack_b);
			second(stack_a, stack_b);
		}
	}
}

int	main(int ac, char **av)
{
	t_pile	*stack_a;
	t_pile	*stack_b;

	if (ac < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	process_input(ac, av, &stack_a);
	sort_stacks(&stack_a, &stack_b);
	ft_exit(0);
	return (0);
}
