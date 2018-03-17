CFLAGS = -c -Wall -Wextra -Wall
CC = gcc
FILES = ft_strrchr.c \
ft_strcmp.c \
ft_strlcat.c \
ft_memcpy.c \
ft_memmove.c \
ft_strncpy.c \
ft_strstr.c \
ft_isdigit.c \
ft_memccpy.c \
ft_memchr.c \
ft_bzero.c \
ft_isalnum.c \
ft_toupper.c \
ft_strcpy.c \
ft_strdup.c \
ft_strnstr.c \
ft_isascii.c \
ft_strlen.c \
ft_strncat.c \
ft_strncmp.c \
ft_memcmp.c \
ft_memset.c \
ft_isalpha.c \
ft_strcat.c \
ft_tolower.c \
ft_atoi.c \
ft_isprint.c \
ft_strchr.c \
ft_strdel.c \
ft_memdel.c \
ft_strnew.c \
ft_memalloc.c \
ft_strclr.c \
ft_striter.c \
ft_striteri.c \
ft_strmap.c \
ft_strmapi.c \
ft_strsub.c \
ft_strjoin.c \
ft_strtrim.c \
ft_strsplit.c \
ft_itoa.c \
ft_putchar.c \
ft_putstr.c \
ft_putendl.c \
ft_putnbr.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_strnequ.c \
ft_strequ.c \
ft_isspace.c \
ft_canfind.c \
ft_slice.c \
ft_strrev.c \

NAME = libft.a

OBJ := $(shell echo $(FILES) | sed "s/\.c/\.o/g")

.PHONY: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

.PHONY: all

all:	$(NAME)

.PHONY: copy

copy:
	cp $(FILES) .
	cp My_Funcs/ft_isspace.c .

.PHONY: clean

clean:
	rm -rf $(OBJ)

.PHONY: fclean

fclean:
	make clean
	rm -rf $(NAME)
	rm -rf libft

.PHONY: re

re:
	make fclean
	make all

.PHONY: test

test:
	make all
	$(CC) -o libft -Wall -Wextra -Wall tests.c libft.a
	make clean

