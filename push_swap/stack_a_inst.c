/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_inst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:49:29 by haqajjef          #+#    #+#             */
/*   Updated: 2025/02/20 18:23:25 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_pile **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	pa(t_pile **a, t_pile **b)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	ra(t_pile **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rra(t_pile **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}
