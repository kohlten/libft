CFLAGS = -c -Wall -Wextra -Wall -Iinclude
CC = gcc
NAME = build/libft.a

OBJ_FOLDER = build/obj

CFILES = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, build/obj/%.o, $(CFILES))

all:	$(NAME)

$(NAME): $(OBJ_FOLDER) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Done"

$(OBJ_FOLDER):
	mkdir build build/obj

build/obj/%.o: src/%.c
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo "CC $(CFLAGS) -c -o $@ $<"

clean:
	@rm -rf $(OBJ_FOLDER)

fclean: clean
	@rm -f $(NAME)
	@rm -rf build

re: fclean all

.PHONY: clean fclean re
