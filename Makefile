NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_isdigit.c ft_memset.c ft_bzero.c ft_isalpha.c ft_tolower.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_memcpy.c ft_memchr.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_memcmp.c ft_strncmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strmapi.c ft_itoa.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_striteri.c
OBJ = ${SRC:.c=.o} 

all : $(NAME)
	 
$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)
$(OBJ):
	$(CC) $(FLAGS) -c $(SRC)
clean :
	rm -rf $(OBJ) 
fclean : clean
	 rm -rf $(NAME)
re : fclean all
