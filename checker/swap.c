/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:39:02 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/24 17:34:38 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void		ft_swap(t_checker s)
{
	(s.num[0] ^= s.num[1]);
	(s.num[1] ^= s.num[0]);
	(s.num[0] ^= s.num[1]);
}

void		ft_swap_both(t_checker s, t_checker sb)
{
	ft_swap(s);
	ft_swap(sb);
}
