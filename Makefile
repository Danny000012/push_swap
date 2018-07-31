# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 14:50:13 by dkaplan           #+#    #+#              #
#    Updated: 2018/07/31 13:41:17 by dkaplan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog

all: $(NAME)

$(NAME):
	@mkdir $(NAME)
	make -C libft
	make -C checker
	make -C push_swap

clean:
	@rm -rf $(NAME)
	make clean -C libft

fclean: clean
	make fclean -C libft

love:
	@echo :*

re: fclean all
