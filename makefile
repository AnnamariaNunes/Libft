SRC	= strings/ft_strchr.c \
		strings/ft_strlcpy.c \
		strings/ft_strdup.c \
		memory/ft_calloc.c \
		strings/ft_strlen.c \
		strings/ft_strncmp.c \
		strings/ft_strnstr.c \
		strings/ft_strrchr.c \
		chars/ft_tolower.c \
		chars/ft_toupper.c \
		strings/ft_strlcat.c \
		strings/ft_atoi.c \
		memory/ft_bzero.c \
		chars/ft_isalnum.c \
		chars/ft_isalpha.c \
		chars/ft_isascii.c \
		chars/ft_isdigit.c\
		chars/ft_isprint.c \
		memory/ft_memchr.c \
		memory/ft_memcmp.c \
		strings/ft_striteri.c \
		strings/ft_split.c \
		memory/ft_memcpy.c \
		memory/ft_memmove.c \
		memory/ft_memset.c \
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		


CC = gcc
NAME=libft.a
CFLAGS = -Wall -Wextra -Werror -I .
RM = rm -f
OBJ = $(SRC:.c=.o)


all:	$(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)


clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
