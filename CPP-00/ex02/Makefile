NAME = Acount

CXX = c++ -std=c++98

CPPFLAGS = -Wall -Wextra -Werror

FILES = Acount.cpp tests.cpp

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
	$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)
clean : 
	rm -fr $(OBJCS)

fclean : clean
	rm -fr $(NAME)

re : fclean all

