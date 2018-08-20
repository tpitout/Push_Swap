/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpitout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 19:58:09 by tpitout           #+#    #+#             */
/*   Updated: 2018/08/20 07:38:32 by tpitout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_find_mm(int *arr, int len)
{
	int i;
	int n;
	int x;
	int val;

	val = 1;
	n = 0;
	x = 0;
	i = 0;
	while (i < len)
	{
		(max(arr, len, arr[i])) && (x = i);
		(min(arr, len, arr[i])) && (n = i);
		i++;
	}
	if (ft_abs(len / 2, x) > ft_abs(len / 2, n))
		(x < len / 2) ? (val) : (val = 2);
	else
		(n < len / 2) ? (val) : (val = 2);
	return (val);
}

void	ft_sort(t_stacks *s, int l_b, int p_flag)
{
	if (!check_sorted(s) || s->len_b > l_b)
	{
		while (!check_sorted(s) || s->len_b > l_b)
		{
			if (min(s->stack_a, s->len_a, s->stack_a[s->len_a - 1]))
				pb(s, 1, p_flag);
			else if (max(s->stack_a, s->len_a, s->stack_a[s->len_a - 1]))
				rra(s, 1, p_flag);
			else if (s->stack_a[s->len_a - 1] > s->stack_a[s->len_a - 2])
				sa(s, 1, p_flag);
			else
				rra(s, 1, p_flag);
			while (check_sorted(s) && s->len_b > l_b)
				pa(s, 1, p_flag);
		}
	}
}

void	ft_sort_3(t_stacks *s, int l_b, int p_flag)
{
	if (!check_sorted(s))
	{
		if (min(s->stack_a, s->len_a, s->stack_a[s->len_a - 1]))
		{
			sa(s, 1, p_flag);
			ra(s, 1, p_flag);
		}
		else if (max(s->stack_a, s->len_a, s->stack_a[s->len_a - 1]))
		{
			ra(s, 1, p_flag);
			if (!check_sorted(s))
				sa(s, 1, p_flag);
		}
		else
			ft_sort(s, l_b, p_flag);
	}
}

void	ft_sort_4(t_stacks *s, int p_flag)
{
	if (!check_sorted(s))
	{
		if (min(s->stack_a, s->len_a, s->stack_a[s->len_a - 1])
				|| max(s->stack_a, s->len_a, s->stack_a[s->len_a - 1]))
		{
			pb(s, 1, p_flag);
			ft_sort_3(s, 1, p_flag);
			pa(s, 1, p_flag);
			if (max(s->stack_a, s->len_a, s->stack_a[s->len_a - 1]))
				ra(s, 1, p_flag);
		}
		else
			ft_sort(s, 0, p_flag);
	}
}

void	ft_free(t_stacks *s)
{
	free(s->stack_a);
	s->stack_a = NULL;
	free(s->stack_b);
	s->stack_b = NULL;
	free(s);
}
