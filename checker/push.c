/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:23:59 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/26 12:54:25 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>
#include <stdlib.h>

void		ft_push(t_checker *sa, t_checker *sb)
{
	int i;

	if (sa->end == 0)
		return ;
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
/*
int		main(void)
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
	printf("\n<<<%d\n", t.end);

	printf("%lu", ta.num[0]);
	printf("%lu", ta.num[1]);
	printf("%lu", ta.num[2]);
	printf("%lu\n\n", ta.num[3]);
	printf("\na<<<%d\n", ta.end);

	ft_push(&t, &ta); // before here
	printf("\n\nrotating......\n\n");
	printf("%lu", t.num[0]);
	printf("%lu", t.num[1]);
	printf("%lu", t.num[2]);
	printf("%lu\n\n", t.num[3]);
	printf("\n<<<%d\n", t.end);
	printf("%lu", ta.num[0]);
	printf("%lu", ta.num[1]);
	printf("%lu", ta.num[2]);
	printf("%lu", ta.num[3]);
	printf("%lu\n\n", ta.num[4]);
	printf("\na<<<%d\n", ta.end);
}*/
