/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:39:12 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/26 12:55:25 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../libft/libft.h"
#include <stdio.h>

void		ft_rotate(t_checker s)
{
	int tmp;
	int i;

	if (s.end == 0 || s.end == 1)
		return ;
	i = 0;
	tmp = s.num[0];
	while (i < s.end - 1)
	{
		s.num[i] = s.num[i + 1];
		i++;
		s.num[i] = tmp;
	}
}

void		ft_rotate_both(t_checker s, t_checker sb)
{
	ft_rotate(s);
	ft_rotate(sb);
}

void		ft_revrotate(t_checker s)
{
	int tmp;
	int i;

	if (s.end == 0 || s.end == 1)
		return ;
	i = s.end - 1;
	tmp = s.num[s.end - 1];
	while (i >= 0)
	{
		s.num[i] = s.num[i - 1];
		i--;
		s.num[i] = tmp;
	}
	s.num[0] = tmp;
}

void		ft_revrotate_both(t_checker s, t_checker sb)
{
	ft_revrotate(s);
	ft_revrotate(sb);
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

	ft_revrotate_both(t, ta); // before here
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
