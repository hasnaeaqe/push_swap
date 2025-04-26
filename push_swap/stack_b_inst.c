/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b_inst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:53:29 by haqajjef          #+#    #+#             */
/*   Updated: 2025/03/01 14:39:09 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_pile **a, t_pile **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}

void	sb(t_pile **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	rb(t_pile **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rrb(t_pile **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}
