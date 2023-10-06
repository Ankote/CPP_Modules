NAME = Serialization

CPP = c++ 

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

FILES = Serialization.cpp Data.cpp main.cpp

OBJCS = $(FILES:.cpp=.o)

HEADERS = Serialization.hpp Data.hpp

all : $(NAME)

$(NAME) : $(OBJCS) $(HEADERS)
	$(CPP) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
	rm -fr $(OBJCS)

fclean : clean
	rm -fr $(NAME)

re : fclean all

.PHONY : all clean fclean re
