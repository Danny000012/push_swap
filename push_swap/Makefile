# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 14:50:13 by dkaplan           #+#    #+#              #
#    Updated: 2018/07/30 13:13:33 by dkaplan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../out/pushswap
SOURCES = exutils.c push.c push_swap.c rotate.c swap.c utils.c
INCLUDES = ../libft/libft.a

$(NAME):
	make -C ../libft
	gcc -Wall -Werror -Wextra $(SOURCES) $(INCLUDES) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all
