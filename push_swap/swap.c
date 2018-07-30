/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:39:02 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/30 14:54:44 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

void		ft_swap(t_checker s)
{
	if (s.end == 0 || s.end == 1)
		return ;
	(s.num[0] ^= s.num[1]);
	(s.num[1] ^= s.num[0]);
	(s.num[0] ^= s.num[1]);
}

void		ft_swap_both(t_checker s, t_checker sb)
{
	ft_swap(s);
	ft_swap(sb);
}
