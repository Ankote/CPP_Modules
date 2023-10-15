NAME = Serialization

CPP = c++ 

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

FILES = Base.cpp main.cpp generate.cpp

OBJCS = $(FILES:.cpp=.o)

HEADERS =  Base.hpp A.hpp  B.hpp  C.hpp generate.hpp

all : $(NAME)

$(NAME) : $(OBJCS) $(HEADERS)
	$(CPP) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
	rm -fr $(OBJCS)

fclean : clean
	rm -fr $(NAME)

re : fclean all

.PHONY : all clean fclean re