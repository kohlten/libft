CFLAGS = -c -Wall -Wextra -Wall -I../includes
CC = gcc
NAME = libft.a

CFILES = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(CFILES))

all:	$(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Done"

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo "CC $(CFLAGS) -c -o $@ $<"

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
