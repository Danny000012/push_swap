/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:37:54 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/24 16:17:41 by dkaplan          ###   ########.fr       */
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
void		ft_swap(t_checker s);
void		ft_swap_both(t_checker sa, t_checker sb);
void		ft_rotate(t_checker s);
void		ft_rotate_both(t_checker s, t_checker sb);
void		ft_revrotate(t_checker s);
void		ft_revrotate_both(t_checker s, t_checker sb);
void        ft_push(t_checker sa, t_checker sb);
int			get_op(char *op);
void		ft_error_msg(void);

#endif
