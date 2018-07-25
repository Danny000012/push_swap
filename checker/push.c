/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:23:59 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/25 13:37:58 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>

void		ft_push(t_checker *sa, t_checker *sb)
{
	int i;

	i = sb->end - 1;
	while (i >= 0)
	{
		sb->num[i + 1] = sb->num[i];
		i--;
	}
	sb->num[0] = sa->num[0];
	sb->end++;
	while (i < sa->end)
	{
		sa->num[i] = sa->num[i + 1];
		i++;
	}
	sa->end--;
}
