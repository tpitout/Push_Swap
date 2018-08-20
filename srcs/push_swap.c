/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpitout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 19:45:11 by tpitout           #+#    #+#             */
/*   Updated: 2018/08/20 07:41:35 by tpitout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			choose(t_stacks *s, int flag)
{
	if (s->len_a == 3)
		ft_sort_3(s, 0, flag);
	else if (s->len_a == 4)
		ft_sort_4(s, flag);
	else if (s->len_a < 11)
		ft_sort(s, 0, flag);
	else
		ft_sort_v5(s, flag);
}

int				viz2(char **argv)
{
	if (ft_ccmd(argv[1]) == 2)
		return (1);
	return (0);
}

int				main(int argc, char **argv)
{
	t_stacks	*s;
	int			flag;

	if (argc > 1)
	{
		s = init();
		(flag = viz2(argv)) && argv++;
		s->size = count_args(argv);
		s->stack_a = (int *)malloc(sizeof(int) * s->size);
		s->stack_b = (int *)malloc(sizeof(int) * s->size);
		s->len_a = s->size;
		if (error(argv) || !ft_store_arr(s, argv) || dub(s))
		{
			write(1, "Error\n", 6);
			ft_free(s);
			return (0);
		}
		choose(s, flag);
		if (flag == 1)
			printf(BLUE "%d MOVES\n", s->moves);
		ft_free(s);
	}
	return (0);
}
