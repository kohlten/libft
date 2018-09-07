CFLAGS = -c -Wall -Wextra -Wall -Iinclude
CC = gcc
NAME = libft.a

OBJ_FOLDER = obj

CFILES = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, obj/%.o, $(CFILES))

all:	$(NAME)

$(NAME): $(OBJ_FOLDER) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Done"

$(OBJ_FOLDER):
	mkdir obj

obj/%.o: src/%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo "CC $(CFLAGS) -c -o $@ $<"

clean:
	@rm -rf $(OBJ_FOLDER)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
