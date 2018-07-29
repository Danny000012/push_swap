# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 14:50:13 by dkaplan           #+#    #+#              #
#    Updated: 2018/07/26 15:14:32 by dkaplan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(NAME):
	make -C ../libft
	make -C ../push_swap
	make -C ../checker

all: $(NAME)

clean:
	rm -f checker push_swap

fclean: clean
	rm -f checker push_swap

re: fclean all
