/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 14:30:36 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/30 14:54:51 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "pushswap.h"

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
