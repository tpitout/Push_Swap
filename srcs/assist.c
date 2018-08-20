/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assist.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpitout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 19:56:59 by tpitout           #+#    #+#             */
/*   Updated: 2018/08/19 14:29:11 by tpitout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_sorted_b(t_stacks *s)
{
	int i;

	i = 0;
	while (i < s->len_b - 1)
	{
		if (s->stack_b[i + 1] < s->stack_b[i])
			return (0);
		i++;
	}
	return (1);
}

int		min(int *arr, int len, int num)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (num > arr[i])
			return (0);
		i++;
	}
	return (1);
}

int		max(int *arr, int len, int num)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (num < arr[i])
			return (0);
		i++;
	}
	return (1);
}

int		minmax(int *arr, int len, int num)
{
	if (max(arr, len, num) || min(arr, len, num))
		return (1);
	return (0);
}

int		ft_abs(int num_a, int num_b)
{
	int ans;

	if (num_a < 0)
		num_a *= -1;
	if (num_b < 0)
		num_b *= -1;
	if (num_a > num_b)
		ans = num_a - num_b;
	else
		ans = num_b - num_a;
	return (ans);
}
