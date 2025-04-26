/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:38:58 by haqajjef          #+#    #+#             */
/*   Updated: 2025/03/02 10:38:24 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	non_num(char *nb)
{
	int	i;

	i = 0;
	if (nb[i] == '+' || nb[i] == '-')
		i++;
	while (nb[i])
	{
		if (nb[i] > '9' || nb[i] < '0')
			return (-1);
		i++;
	}
	return (1);
}

int	duplicate(t_pile *p, int c)
{
	t_pile	*tmp;

	tmp = p;
	while (tmp)
	{
		if (c == tmp->valeur)
			return (-1);
		tmp = tmp->suivant;
	}
	return (1);
}

int	is_empty(char *nb)
{
	int	i;

	i = 0;
	if (!nb)
		return (-1);
	while (nb[i] == '-' || nb[i] == '+' || (nb[i] >= 9 && nb[i] <= 13)
		|| nb[i] == ' ')
		i++;
	if (!nb[i])
		return (-1);
	return (1);
}

int	is_sort(t_pile **p)
{
	t_pile	*tmp;

	tmp = *p;
	while (tmp && tmp->suivant)
	{
		if (tmp->valeur > tmp->suivant->valeur)
			return (0);
		tmp = tmp->suivant;
	}
	return (1);
}
