/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 14:30:36 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/26 15:14:04 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "checker.h"

void		ft_error_msg(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

int			ft_check_order(t_checker stack_a, t_checker stack_b)
{
	int		tmp;
	int		i;

	i = 1;
	if (stack_b.end != 0)
		return (0);
	tmp = stack_a.num[0];
	while (i < stack_a.end)
	{
		if (stack_a.num[i] < tmp)
			return (0);
		tmp = stack_a.num[i];
		i++;
	}
	return (1);
}

void			print_stack(t_checker a, t_checker b)
{
	int i;

	i = 0;
	ft_putstr("STACK A:\n");
	while (i < a.end)
	{
		ft_putnbr(a.num[i]);
		ft_putchar('\n');
		i++;
	}
	i = 0;
	ft_putstr("STACK B:\n");
	while (i < b.end)
	{
		ft_putnbr(b.num[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putstr("\nThere are currently <");
	ft_putnbr(a.end);
	ft_putstr("> elements in stack A, and <");
	ft_putnbr(b.end);
	ft_putstr("> elements in stack B\n\nEnter command:\n------------------------\n");
}
