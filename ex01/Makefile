NAME = main
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJ = $(SRC:%.cpp=%.o)
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -c -std=c++98

all: $(NAME)

$(NAME): $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all