/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 13:06:12 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/30 15:28:54 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "../libft/libft.h"
#include <stdio.h>

int			find_loc(t_checker stack_a)
{
	int	i;
	int	temp;
	int	loc;

	i = 1;
	temp = stack_a.num[0];
	loc = 0;
	while (i < stack_a.end)
	{
		if (stack_a.num[i] < temp)
		{
			loc = i;
			temp = stack_a.num[i];
		}
		i++;
	}
	return (loc);
}

void		sort_small(t_checker stack_a, t_checker stack_b)
{
	stack_b.end = 0;
	if (stack_a.end == 3)
	{
		if (find_loc(stack_a) == 2 && stack_a.num[0] > stack_a.num[1])
			ft_putstr("sa\nrra\n");
		else if (find_loc(stack_a) == 2)
			ft_putstr("rra\n");
		if (find_loc(stack_a) == 1 && stack_a.num[0] > stack_a.num[2])
			ft_putstr("ra\n");
		else if (find_loc(stack_a) == 1)
			ft_putstr("sa\n");
		if (find_loc(stack_a) == 0 && stack_a.num[1] > stack_a.num[2])
			ft_putstr("rra\nsa\n");
	}
	if (stack_a.end == 2)
	{
		if (ft_check_order(stack_a, stack_b) == 0)
			ft_putstr("sa\n");
		return ;
	}
	else
		return ;
}

int			main(int ac, char **av)
{
	t_checker	stack_a;
	t_checker	stack_b;
	static int	i;

	stack_b.num = (long*)malloc(sizeof(long) * 2000);
	stack_b.end = 0;
	if (num_val(av, ac) == 0)
		ft_error_msg();
	stack_a = array_maker(av, ac);
	if (overflow_check(stack_a.num, stack_a.end - 1) == 1
			|| dup_check(stack_a.num, stack_a.end) == 1)
		ft_error_msg();
	while (stack_a.end > 3 && ft_check_order(stack_a, stack_b) == 0)
	{
		i = find_loc(stack_a);
		dprintf(2,"<<%d>>\n", i);
		if (i == 0)
			ft_push(&stack_a, &stack_b, 1);
		else if (i <= stack_a.end / 2)
			ft_rotate_and_print(stack_a);
		else if (i > stack_a.end / 2)
			ft_revrotate_and_print(stack_a);
	}
	sort_small(stack_a, stack_b);
	while (stack_b.end > 0)
		ft_push(&stack_b, &stack_a, 0);
}
