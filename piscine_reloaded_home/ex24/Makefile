NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRCS = ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c \
	./srcs/ft_swap.c ./srcs/ft_putchar.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c -I .includes/*.h $(SRCS)
	ar rc $(NAME) ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o ft_putchar.o

clean:
	/bin/rm -f ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o ft_putchar.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME)
