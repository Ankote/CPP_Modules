NAME = Bureaucrat

CXX = c++ 

CPPFLAGS = -Wall -Wextra -Werror

FILES = main.cpp  Bureaucrat.cpp Form.cpp -std=c++98


OBJCS = $(FILES:.cpp=.o)

HEADERS =  Bureaucrat.hpp Form.hpp
all : $(NAME)

$(NAME) : $(OBJCS) $(HEADERS)
		$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
	rm -fr $(OBJCS) 

fclean : clean
	rm -fr $(NAME)

re : fclean all

.PHONY :  all re clean fclean 
