/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpitout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 19:46:08 by tpitout           #+#    #+#             */
/*   Updated: 2018/08/19 19:00:35 by tpitout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*init(void)
{
	t_stacks *s;

	s = (t_stacks *)malloc(sizeof(t_stacks));
	s->moves = 0;
	s->stack_a = NULL;
	s->stack_b = NULL;
	s->size = 0;
	s->len_a = 0;
	s->len_b = 0;
	return (s);
}

void		viz(t_stacks *s, int y, int x)
{
	int o = x;
	int z = y;
	t_stacks *f = s;

	f = NULL;
	o = 0;
	z = 0;

}
