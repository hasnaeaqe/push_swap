/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:47:27 by haqajjef          #+#    #+#             */
/*   Updated: 2025/03/01 17:31:05 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_pile **p)
{
	t_pile	*tmp;
	t_pile	*first;
	t_pile	*second;

	if (!p || !(*p) || !((*p)->suivant))
		return ;
	tmp = *p;
	first = tmp;
	second = tmp->suivant;
	first->suivant = second->suivant;
	second->suivant = first;
	*p = second;
}

static void	add_stack_lifo(int value, t_pile **stack)
{
	t_pile	*new;

	new = ft_malloc(sizeof(t_pile));
	new->valeur = value;
	new->suivant = *stack;
	*stack = new;
}

void	push(t_pile **from, t_pile **to)
{
	t_pile	*tmp;

	if (!*from || !from)
		return ;
	tmp = *from;
	add_stack_lifo(tmp->valeur, to);
	*from = tmp->suivant;
}

void	rotate(t_pile **p)
{
	t_pile	*last;
	t_pile	*second;
	t_pile	*debut;

	if (!p || !(*p) || !((*p)->suivant))
		return ;
	debut = *p;
	second = debut->suivant;
	last = *p;
	while (last->suivant)
	{
		last = last->suivant;
	}
	last->suivant = debut;
	debut->suivant = NULL;
	*p = second;
}

void	reverse_rotate(t_pile **p)
{
	t_pile	*last;
	t_pile	*avant_derniere;
	t_pile	*debut;

	if (!p || !(*p) || !((*p)->suivant))
		return ;
	avant_derniere = NULL;
	debut = *p;
	last = *p;
	while (last->suivant)
	{
		avant_derniere = last;
		last = last->suivant;
	}
	last->suivant = debut;
	avant_derniere->suivant = NULL;
	*p = last;
}
