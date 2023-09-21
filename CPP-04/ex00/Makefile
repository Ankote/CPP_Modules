NAME = Polymorphism

CPP = c++

FILES = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongDog.cpp WrongCat.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBCJS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBCJS)
	$(CPP) $(CPPFLAGS) $(OBCJS) -o $(NAME)

clean:
	rm -fr $(OBCJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: clean fclean re
