/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 15:10:20 by avan-ni           #+#    #+#             */
/*   Updated: 2018/08/19 14:23:47 by tpitout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_blocks(t_stacks *s, int div, int sml, int p_flag)
{
	int i;
	int blocks;
	int c_min;

	blocks = (s->size / div);
	c_min = 0;
	while (s->len_a != 0)
	{
		c_min = 0;
		i = 0;
		while (i < s->len_a - 2)
			if (s->stack_a[s->len_a - 1] > s->stack_a[i++])
				c_min++;
		if (c_min < blocks + 1)
		{
			blocks--;
			pb(s, 1, p_flag);
		}
		else
			rra(s, 1, p_flag);
		if (blocks <= sml)
			blocks = (s->size / div);
	}
}

void	ft_sort_v5(t_stacks *s, int p_flag)
{
	if (s->len_a < 101)
		ft_sort_blocks(s, 6, 1, p_flag);
	else
		ft_sort_blocks(s, 10, 4, p_flag);
	while (!check_sorted(s) || s->len_b > 0)
	{
		if (max(s->stack_b, s->len_b, s->stack_b[s->len_b - 1]))
			pa(s, 1, p_flag);
		else if (min(s->stack_b, s->len_b, s->stack_b[s->len_b - 1]))
		{
			pa(s, 1, p_flag);
			ra(s, 1, p_flag);
		}
		else if (ft_find_mm(s->stack_b, s->len_b) == 2)
			rb(s, 1, p_flag);
		else
			rrb(s, 1, p_flag);
		if (check_sorted_b(s) && s->len_b > 0)
			while (s->len_b > 0)
				pa(s, 1, p_flag);
		while (s->len_b == 0 && !check_sorted(s))
			ra(s, 1, p_flag);
	}
}
