NAME = Contacts

CXX = c++ -std=c++98

CPPFLAGS = -Wall -Wextra -Werror  -fsanitize=address
 
FILES = main.cpp utils.cpp utils01.cpp

OBJCS = $(FILES:.cpp=.o)

all : $(NAME);

$(NAME) : $(OBJCS)
		@$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)
		@echo "Compoiling objects....\n"

clean :
	rm -fr $(OBJCS)

fclean : clean
	rm -fr $(NAME)

re : fclean all


