FLAGS = -g -Wall -Wextra -Werror
SRC = ./src/stack_operaters.c

OBJ = $(SRC:.c=.o)
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	@cc $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	@cc $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re 
.SECONDARY: $(OBJ) 