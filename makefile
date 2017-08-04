NAME = libft.a
SRCS = ./srcs/*.c
HEADER = ./includes/*.c
OBJECTS = 
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) $(HEADER)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean: 
	rm -f *o.

fclean:
	rm -f $(NAME)

re: fclean all
