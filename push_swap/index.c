/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:37:07 by haqajjef          #+#    #+#             */
/*   Updated: 2025/03/01 18:16:15 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_pile *p)
{
	t_pile	*tmp;
	t_pile	*current;
	int		count;

	tmp = p;
	while (tmp)
	{
		count = 0;
		current = p;
		while (current)
		{
			if (current->valeur < tmp->valeur)
				count++;
			current = current->suivant;
		}
		tmp->index = count;
		tmp = tmp->suivant;
	}
}

int	find_min_index(t_pile *p)
{
	t_pile	*tmp;
	int		index_min;
	int		min;
	int		i;

	if (!p)
		return (-1);
	tmp = p;
	min = p->valeur;
	index_min = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->valeur < min)
		{
			min = tmp->valeur;
			index_min = i;
		}
		tmp = tmp->suivant;
		i++;
	}
	return (index_min);
}

void	move_min_to_top(t_pile **a, int min_index)
{
	int	size;

	size = len_stack(*a);
	if (min_index <= size / 2)
	{
		while (min_index-- > 0)
			ra(a);
	}
	else
	{
		while (min_index++ < size)
			rra(a);
	}
}
