/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 13:15:58 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/31 13:24:09 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
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
void			ft_swap(t_checker s);
void			ft_swap_both(t_checker sa, t_checker sb);
void			ft_rotate(t_checker s);
void			ft_rotate_and_print(t_checker s);
void			ft_rotate_both(t_checker s, t_checker sb);
void			ft_revrotate(t_checker s);
void			ft_revrotate_and_print(t_checker s);
void			ft_revrotate_both(t_checker s, t_checker sb);
void			ft_push(t_checker *sa, t_checker *sb, int pook);
int				get_op(char *op);
void			ft_error_msg(void);
void			do_op(int i, t_checker *stack_a, t_checker *stack_b);
int				ft_check_order(t_checker stack_a);
void			print_stack(t_checker a, t_checker b);
int				num_val(char **arg, int count);
int				dup_check(long *num, int end);
t_checker		array_maker(char **av, int ac);
int				overflow_check(long *numbers, int k);

#endif
