/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:23:59 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/24 18:00:59 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>

void		ft_push(t_checker sa, t_checker sb)
{
	int i;

	i = sb.end - 1;
	while (i >= 0)
	{
		sb.num[i + 1] = sb.num[i];
		i--;
	}
	sb.num[0] = sa.num[0];
	sb.end++;
	while (i < sa.end)
	{
		sa.num[i] = sa.num[i + 1];
		i++;
	}
	sa.end--;
}

int		main(void)
{
	t_checker sa;
	t_checker sb;

	sa.num = (long*)malloc(sizeof(long) * 3);
	sb.num = (long*)malloc(sizeof(long) * 3);
	sa.num[0] = 1;
	sa.num[1] = 2;
	sb.num[0] = 4;
	sb.num[1] = 0;
	sa.end = 2;
	sb.end = 1;
	printf("Stack_a<<%lu>><<%lu>>((%d))\n", sa.num[0], sa.num[1], sa.end);
	printf("Stack_b<<%lu>>((%d))\n\n\n..Pushing..\n\n", sb.num[0], sb.end);
	ft_push(sa, sb);
	printf("Stack_a<<%lu>>((%d))\n", sa.num[0], sa.end);
	printf("Stack_b<<%lu>><<%lu>>((%d))", sb.num[0], sb.num[1], sb.end);
}
