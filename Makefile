NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_isdigit.c ft_memset.c ft_bzero.c ft_isalpha.c ft_tolower.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_memcpy.c ft_memchr.c
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
