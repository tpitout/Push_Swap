/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpitout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 08:14:53 by tpitout           #+#    #+#             */
/*   Updated: 2018/08/20 08:17:33 by tpitout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		vis(char **argv)
{
	if (ft_ccmd(argv[1]) == 2)
		return (1);
	if (ft_ccmd(argv[1]) == 3)
		return (2);
	return (0);
}

int		main(int argc, char **argv)
{
	t_stacks	*s;
	int			pflag;

	if (argc > 1)
	{
		s = init();
		(pflag = vis(argv)) && argv++;
		s->size = count_args(argv);
		s->stack_a = (int *)malloc(sizeof(int) * s->size);
		s->stack_b = (int *)malloc(sizeof(int) * s->size);
		s->len_a = s->size;
		if (error(argv) || !ft_store_arr(s, argv) || dub(s)
				|| !ft_read(s, pflag))
		{
			write(1, "Error\n", 6);
			ft_free(s);
			return (0);
		}
		(check_sorted(s) && s->len_b == 0) ? (printf(GREEN "OK\n")) :
			(printf(RED "KO\n"));
		ft_free(s);
	}
	return (0);
}
