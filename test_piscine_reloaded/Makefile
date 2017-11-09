NAME = test.out
SRC = ft_putchar.c ex06/ft_print_alphabet.c ex07/ft_print_numbers.c \
	ex08/ft_is_negative.c ex10/ft_swap.c ex11/ft_div_mod.c \
	ex12/ft_iterative_factorial.c ex13/ft_recursive_factorial.c \
	ex14/ft_sqrt.c ex15/ft_putstr.c ex16/ft_strlen.c ex17/ft_strcmp.c \
	ex21/ft_range.c
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) main.c main.h

clean:
	rm a.out

fclean: clean

re: fclean $(NAME)
