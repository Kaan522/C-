NAME	= MutantStack

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all: $(NAME)

$(NAME): *.cpp
	@ $(CC) $(FLAGS) *.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all

run: fclean all
	clear
	./$(NAME)

.PHONY: all clean re run