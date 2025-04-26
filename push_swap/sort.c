/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:10:06 by haqajjef          #+#    #+#             */
/*   Updated: 2025/03/01 17:43:00 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_2(t_pile **a)
{
	if ((*a)->valeur > (*a)->suivant->valeur)
		sa(a);
}

static void	sort_3(t_pile **stack_a)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->suivant)
		return ;
	if (!(*stack_a)->suivant->suivant)
	{
		sort_2(stack_a);
		return ;
	}
	if ((*stack_a)->valeur > (*stack_a)->suivant->valeur
		&& (*stack_a)->valeur > (*stack_a)->suivant->suivant->valeur)
		ra(stack_a);
	if ((*stack_a)->suivant->valeur > (*stack_a)->valeur
		&& (*stack_a)->suivant->valeur > (*stack_a)->suivant->suivant->valeur)
		rra(stack_a);
	if ((*stack_a)->valeur > (*stack_a)->suivant->valeur)
		sa(stack_a);
}

static void	sort_4(t_pile **a, t_pile **b)
{
	int	min_index;

	min_index = find_min_index(*a);
	move_min_to_top(a, min_index);
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

static void	sort_5(t_pile **a, t_pile **b)
{
	int	min_index;

	min_index = find_min_index(*a);
	move_min_to_top(a, min_index);
	pb(a, b);
	min_index = find_min_index(*a);
	move_min_to_top(a, min_index);
	pb(a, b);
	sort_3(a);
	pa(a, b);
	pa(a, b);
}

void	sort(t_pile **a, t_pile **b, int len)
{
	if (len == 1)
		return ;
	if (len == 2)
		sort_2(a);
	else if (len == 3)
		sort_3(a);
	else if (len == 4)
		sort_4(a, b);
	else if (len == 5)
		sort_5(a, b);
}
