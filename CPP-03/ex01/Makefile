NAME = ScavTrap

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = ClapTrap.cpp main.cpp ScavTrap.cpp

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) :$(OBJCS)
	$(CPP) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
	rm -fr *.o

fclean : clean
	rm -fr $(NAME)

re : fclean all

.PHONY : all clean fclean re
