/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 18:50:01 by avan-ni           #+#    #+#             */
/*   Updated: 2018/08/20 07:49:30 by tpitout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stacks *s, int flag, int p_flag)
{
	int tmp;

	if (s->len_a > 1)
	{
		tmp = s->stack_a[s->len_a - 2];
		s->stack_a[s->len_a - 2] = s->stack_a[s->len_a - 1];
		s->stack_a[s->len_a - 1] = tmp;
		if (flag)
			write(1, "sa\n", 3);
		if (p_flag)
			print_win(s);
	}
}

void	sb(t_stacks *s, int flag, int p_flag)
{
	int tmp;

	if (s->len_b > 1)
	{
		tmp = s->stack_b[s->len_b - 2];
		s->stack_b[s->len_b - 2] = s->stack_b[s->len_b - 1];
		s->stack_b[s->len_b - 1] = tmp;
		if (flag)
			write(1, "sb\n", 3);
		if (p_flag)
			print_win(s);
	}
}

void	ss(t_stacks *s, int flag, int p_flag)
{
	sa(s, flag, p_flag);
	sb(s, flag, p_flag);
	if (flag)
		write(1, "ss\n", 3);
	if (p_flag)
		print_win(s);
}

void	pa(t_stacks *s, int flag, int p_flag)
{
	if (s->len_b > 0)
	{
		s->stack_a[s->len_a] = s->stack_b[s->len_b - 1];
		s->len_a++;
		s->len_b--;
		if (flag)
			write(1, "pa\n", 3);
		if (p_flag)
			print_win(s);
	}
}

void	pb(t_stacks *s, int flag, int p_flag)
{
	if (s->len_a > 0)
	{
		s->stack_b[s->len_b] = s->stack_a[s->len_a - 1];
		s->len_b++;
		s->len_a--;
		if (flag)
			write(1, "pb\n", 3);
		if (p_flag)
			print_win(s);
	}
}
