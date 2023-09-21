NAME = Fixed

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror 

FILES = main.cpp Fixed.cpp

OBJCS = $(FILES:.cpp=.o)

RUN = $(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)

all : $(NAME)

$(NAME) : $(OBJCS)
	$(RUN)

clean :
	rm -fr $(OBJCS)

fclean : clean
	rm -fr $(NAME)

re : fclean all

./PHONY : all clean fclean re

