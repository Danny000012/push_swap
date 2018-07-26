/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:39:02 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/26 12:55:36 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
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

/*int		main(void)
{
	t_checker	t;
	t_checker	ta;

	t.num = (long*)malloc(sizeof(long) * 1000);
	ta.num = (long*)malloc(sizeof(long) * 1000);
	t.end = 4;
	t.num[0] = 6;
	t.num[1] = 4;
	t.num[2] = 8;
	t.num[3] = 9;

	ta.end = 4;
	ta.num[0] = 6;
	ta.num[1] = 4;
	ta.num[2] = 8;
	ta.num[3] = 9;

	printf("%lu", t.num[0]);
	printf("%lu", t.num[1]);
	printf("%lu", t.num[2]);
	printf("%lu\n\n", t.num[3]);

	printf("%lu", ta.num[0]);
	printf("%lu", ta.num[1]);
	printf("%lu", ta.num[2]);
	printf("%lu\n\n", ta.num[3]);

	ft_swap_both(t, ta); // before here
	printf("\n\nrotating......\n\n");
	printf("%lu", t.num[0]);
	printf("%lu", t.num[1]);
	printf("%lu", t.num[2]);
	printf("%lu\n\n", t.num[3]);
	printf("%lu", ta.num[0]);
	printf("%lu", ta.num[1]);
	printf("%lu", ta.num[2]);
	printf("%lu\n\n", ta.num[3]);
}*/
