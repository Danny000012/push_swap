# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 14:50:13 by dkaplan           #+#    #+#              #
#    Updated: 2018/07/30 12:46:56 by dkaplan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = out

all: $(NAME)

$(NAME):
	mkdir $(NAME)
	make -C libft
	make -C checker
	make -C push_swap

clean:
	rm -rf $(NAME)
	make clean -C libft

fclean: clean
	make fclean -C libft

re: fclean all
