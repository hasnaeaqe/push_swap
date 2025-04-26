/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:23:12 by haqajjef          #+#    #+#             */
/*   Updated: 2025/03/01 18:12:45 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	max_stack(t_pile *p)
{
	t_pile	*tmp;
	int		max;

	tmp = p;
	max = INT_MIN;
	while (tmp)
	{
		if (tmp->valeur > max)
			max = tmp->valeur;
		tmp = tmp->suivant;
	}
	return (max);
}

static int	nbr_mvt_debut(t_pile *p, int max)
{
	t_pile	*tmp;
	int		count;

	count = 0;
	tmp = p;
	while (tmp && tmp->valeur != max)
	{
		count++;
		tmp = tmp->suivant;
	}
	return (count);
}

static int	nbr_mvt_last(t_pile *p, int max)
{
	t_pile	*tmp;
	int		count;

	count = 0;
	tmp = p;
	while (tmp && tmp->valeur != max)
	{
		tmp = tmp->suivant;
	}
	while (tmp)
	{
		count++;
		tmp = tmp->suivant;
	}
	return (count);
}

void	second(t_pile **a, t_pile **b)
{
	int	max;
	int	len_debut;
	int	len_last;
	int	len;

	len = len_stack(*b);
	while (len > 0)
	{
		max = max_stack(*b);
		len_debut = nbr_mvt_debut(*b, max);
		len_last = nbr_mvt_last(*b, max);
		if (len_debut <= len_last)
		{
			while (len_debut-- > 0)
				rb(b);
		}
		else
		{
			while (len_last-- > 0)
				rrb(b);
		}
		pa(a, b);
		len--;
	}
}
