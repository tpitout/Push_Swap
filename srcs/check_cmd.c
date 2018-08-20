/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpitout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 19:55:18 by tpitout           #+#    #+#             */
/*   Updated: 2018/08/19 19:15:40 by tpitout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_ccmd(char *l)
{
	if (!ft_strcmp(l, "sa") || !ft_strcmp(l, "sb") ||
		!ft_strcmp(l, "ss") || !ft_strcmp(l, "pa") ||
		!ft_strcmp(l, "pb") || !ft_strcmp(l, "ra") ||
		!ft_strcmp(l, "rb") || !ft_strcmp(l, "rr") ||
		!ft_strcmp(l, "rra") || !ft_strcmp(l, "rrb") ||
		!ft_strcmp(l, "rrr"))
		return (1);
	if (!ft_strcmp(l, "-v"))
		return (2);
	return (0);
}

void	select_function(t_stacks *s, char *str, int p_flag)
{
	if (ft_strcmp(str, "sa") == 0)
		sa(s, 0, p_flag);
	else if (ft_strcmp(str, "sb") == 0)
		sb(s, 0, p_flag);
	else if (ft_strcmp(str, "ss") == 0)
		ss(s, 0, p_flag);
	else if (ft_strcmp(str, "pa") == 0)
		pa(s, 0, p_flag);
	else if (ft_strcmp(str, "pb") == 0)
		pb(s, 0, p_flag);
	else if (ft_strcmp(str, "ra") == 0)
		ra(s, 0, p_flag);
	else if (ft_strcmp(str, "rb") == 0)
		rb(s, 0, p_flag);
	else if (ft_strcmp(str, "rr") == 0)
		rr(s, 0, p_flag);
	else if (ft_strcmp(str, "rra") == 0)
		rra(s, 0, p_flag);
	else if (ft_strcmp(str, "rrb") == 0)
		rrb(s, 0, p_flag);
	else if (ft_strcmp(str, "rrr") == 0)
		rrr(s, 0, p_flag);
}

int		dub(t_stacks *s)
{
	int i;
	int j;

	i = 0;
	while (i < s->size - 1)
	{
		j = i + 1;
		while (j < s->size)
		{
			if (s->stack_a[i] == s->stack_a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_print_arr(t_stacks *s, int x, int y)
{
	int i;
	int j;
	int	tmp;

	tmp = 0;
	i = s->len_a - 1;
	j = 0;
//	start_color();
//	init_pair(1, COLOR_GREEN, COLOR_BLACK);
//	init_pair(2, COLOR_RED, COLOR_BLACK);
//	init_pair(3, COLOR_WHITE, COLOR_BLACK);
	ft_putstr_fd(BLUE "A   B\n", 2);
	printf("%d" ,y + j);
	printf(" %d\n", x);
//	printf(y + j + 1, x, "-\n");
//	mvprintw(y + j, x + 20, "B\n");
//	mvprintw(y + j + 1, x + 20, "-\n");
	j += 2;
	while (i >= 0)
		(j <= 84) ? (printf("%d%d%d\n", y + j++, x, s->stack_a[i--])) : (i--);
	i = s->len_b - 1;
	j = 2;
	while (i >= 0)
		(j <= 84) ? (mvprintw(y + j++, x + 20, "%d\n",
					s->stack_b[i--])) : (i--);
}

void	print_win(t_stacks *s, int flag, int f_flag)
{
	t_stacks v;
	int i = flag;
	int j = f_flag;
	v = *s;
	s->moves = s->moves + 1;	
	i = 0;
	j = 0;

}
