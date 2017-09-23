# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmeier <jmeier@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 21:04:05 by jmeier            #+#    #+#              #
#    Updated: 2017/09/19 15:32:33 by jmeier           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
HEADER = libft.h
OBJ = *.o

all: $(NAME)
	
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ):
	gcc -c -Wall -Werror -Wextra $(SRC) $(HEADER) -I ./

clean:
		rm -f *.o libft.h.gch

fclean: clean
		rm -f $(NAME)

re: fclean all
