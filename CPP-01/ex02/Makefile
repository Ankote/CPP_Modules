NAME = Brain

CXX = c++ -std=c++98

CPPFLAGS = -Wall -Wextra -Werror

FILES = main.cpp

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
		$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
	rm -fr main.o

fclean : clean
	rm -fr $(NAME)

re : fclean all

.PHONY :  all re clean fclean 
