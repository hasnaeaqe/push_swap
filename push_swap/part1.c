/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:23:23 by haqajjef          #+#    #+#             */
/*   Updated: 2025/03/01 17:41:24 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_stack(t_pile *p)
{
	int		count;
	t_pile	*head;

	count = 0;
	head = p;
	while (head)
	{
		head = head->suivant;
		count++;
	}
	return (count);
}

static int	ft_mini_sort(t_pile *list)
{
	int		count;
	t_pile	*tmp;

	count = 0;
	tmp = list;
	while (tmp && tmp->suivant)
	{
		if (tmp->valeur - tmp->suivant->valeur >= 2
			&& tmp->valeur - tmp->suivant->valeur <= 4)
			count++;
		tmp = tmp->suivant;
	}
	return (count >= 20 && count <= 498);
}

static int	ft_range(int len)
{
	if (len <= 100)
		return (13);
	else
		return (36);
}

static void	init_first_part(t_pile **stack_a, int *i, int *length, int *range)
{
	*i = 0;
	*length = len_stack(*stack_a);
	*range = ft_range(*length);
}

void	first(t_pile **a, t_pile **b)
{
	int	i;
	int	length;
	int	range;

	init_first_part(a, &i, &length, &range);
	while (length > 0)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			i++;
			length--;
		}
		else if ((*a)->index <= (i + range))
		{
			pb(a, b);
			rb(b);
			i++;
			length--;
		}
		else if (ft_mini_sort(*a))
			rra(a);
		else
			ra(a);
	}
}
