NAME = PmergeMe

CPP  = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp PmergeMe.cpp

HEADER = PmergeMe.hpp

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS) $(HEADER)
	$(CPP) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
	rm -fr $(OBJCS)

fclean : clean
	rm -fr $(NAME)

re : fclean all

./PHONY : all clean fclean re%       