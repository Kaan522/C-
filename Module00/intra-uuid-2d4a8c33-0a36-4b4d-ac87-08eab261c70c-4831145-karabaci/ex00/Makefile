NAME    = megaphone
CC      = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98
RM      = rm -rf

all: $(NAME)
	
$(NAME): *.cpp
	@$(CC) $(FLAGS) *.cpp -o $(NAME)
clean:
	@$(RM) $(NAME)
fclean:
	@$(RM) $(NAME)
re: clean all

.PHONY: all clean fclean re