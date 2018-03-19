CFLAGS = -c -Wall -Wextra -Wall
CC = gcc
NAME = libft.a

CFILES = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(CFILES))

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): $(CFILES)
	$(CC) $(CFLAGS) $(CFILES)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
