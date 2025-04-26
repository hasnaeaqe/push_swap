/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:57:53 by haqajjef          #+#    #+#             */
/*   Updated: 2025/03/02 10:40:03 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct t_pile
{
	int				valeur;
	int				index;
	struct t_pile	*suivant;
}	t_pile;

int		non_num(char *nb);
int		duplicate(t_pile *p, int c);
int		is_empty(char *nb);
int		is_sort(t_pile **p);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
void	index_stack(t_pile *p);
int		find_min_index(t_pile *p);
void	move_min_to_top(t_pile **a, int min_index);
void	swap(t_pile **p);
void	push(t_pile **a, t_pile **b);
void	rotate(t_pile **p);
void	reverse_rotate(t_pile **p);
void	sa(t_pile **a);
void	pa(t_pile **a, t_pile **b);
void	ra(t_pile **a);
void	rra(t_pile **a);
void	sb(t_pile **b);
void	pb(t_pile **a, t_pile **b);
void	rb(t_pile **b);
void	rrb(t_pile **b);
void	add_to_stack(int val, t_pile **p);
void	parse_input(char *arg, t_pile **stack);
int		len_stack(t_pile *p);
void	first(t_pile **p, t_pile **b);
void	second(t_pile **a, t_pile **b);
void	error(void);
void	sort(t_pile **a, t_pile **b, int len);
void	*ft_malloc(size_t i);
void	ft_exit(int n);

#endif