
NAME = Iter

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

FILES = main.cpp

HEADERS = iter.hpp

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS) $(HEADERS)
	$(CPP) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean : 
	rm -fr $(OBJCS)

fclean : clean
	rm -fr $(NAME)

re : fclean all

./PHONY : all clean fclean re