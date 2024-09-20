CC = g++
SRC = *.cpp
NAME = fixed
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) :
	@$(CC) $(SRC) -o $(NAME) $(FLAGS)

clean:
	@echo "Temizle"

fclean: clean
	@rm -rf $(NAME)

re: fclean all