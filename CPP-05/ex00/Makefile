NAME = Bureaucrat

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror  -std=c++98 -fsanitize=address

FILES = main.cpp  Bureaucrat.cpp


OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS) Bureaucrat.hpp
		$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
	rm -fr $(OBJCS) 

fclean : clean
	rm -fr $(NAME)

re : fclean all

.PHONY :  all re clean fclean 
