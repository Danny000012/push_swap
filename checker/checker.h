/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:37:54 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/23 15:55:40 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"

typedef struct	s_checker
{
	long			*num;
	int				end;
}				t_checker;
typedef	struct	s_savespace
{
	t_checker	array;
	int			i;
	int			j;
	int			k;
}				t_savespace;

void		ft_swap(int *s);
void		ft_swap_both(int *sa, int *sb);

#endif
