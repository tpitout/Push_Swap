/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpitout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 19:42:51 by tpitout           #+#    #+#             */
/*   Updated: 2018/08/19 19:06:26 by tpitout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# define RED 	"\x1b[31m"
# define GREEN	"\x1b[32m"
# define BLUE	"\x1b[36m"
# define RESET	"\x1b[0m"
# include <ncurses.h>

typedef struct	s_stacks
{
	int	*stack_a;
	int	*stack_b;
	int	size;
	int	len_a;
	int	len_b;
	int	moves;
}		t_stacks;

t_stacks	*init(void);

void		sa(t_stacks *s, int flag, int p_flag);
void		sb(t_stacks *s, int flag, int p_flag);
void		ss(t_stacks *s, int flag, int p_flag);
void		pa(t_stacks *s, int flag, int p_flag);
void		pb(t_stacks *s, int flag, int p_flag);
void		ra(t_stacks *s, int flag, int p_flag);
void		rb(t_stacks *s, int flag, int p_flag);
void		rr(t_stacks *s, int flag, int p_flag);
void		rra(t_stacks *s, int flag, int p_flag);
void		rrb(t_stacks *s, int flag, int p_flag);
void		rrr(t_stacks *s, int flag, int p_flag);

int		ft_ccmd(char *l);
void		select_function(t_stacks *s, char *str, int p_flag);
int		dub(t_stacks *s);

int		count_args (char **argv);
int		ft_store_arr (t_stacks *s, char **argv);
int		error(char **argv);
int		ft_read(t_stacks *s, int p_flag);
int		check_sorted(t_stacks *s);

void		print_win(t_stacks *s, int flag, int p_flag);

int		check_sorted_b(t_stacks *s);
int		min(int *arr, int len, int num);
int		max(int *arr, int len, int num);
int		minmax(int *arr, int len, int num);
int		ft_abs(int num_a, int num_b);

int		ft_find_mm(int *arr, int len);
void		ft_sort(t_stacks *s, int l_b, int p_flag);
void		ft_sort_3(t_stacks *s, int l_b, int p_flag);
void		ft_sort_4(t_stacks *s, int p_flag);

void		ft_sort_blocks(t_stacks *s, int div, int sml, int p_flag);
void		ft_sort_v5(t_stacks *s, int p_flag);

void		ft_free(t_stacks *s);

void		viz(t_stacks *s, int y, int x);

#endif
