/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:28:14 by haqajjef          #+#    #+#             */
/*   Updated: 2025/03/02 10:38:29 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_to_stack(int val, t_pile **p)
{
	t_pile	*tmp;
	t_pile	*nouv;

	if (duplicate(*p, val) == -1)
		error();
	nouv = ft_malloc(sizeof(t_pile));
	nouv->valeur = val;
	nouv->suivant = NULL;
	if (*p == NULL)
	{
		*p = nouv;
		return ;
	}
	tmp = *p;
	while (tmp->suivant)
		tmp = tmp->suivant;
	tmp->suivant = nouv;
}

void	parse_input(char *arg, t_pile **stack)
{
	char	**str;
	int		j;

	j = 0;
	str = ft_split(arg, ' ');
	while (str[j])
	{
		if (non_num(str[j]) == -1)
			error();
		add_to_stack(ft_atoi(str[j]), stack);
		j++;
	}
}
