NAME = Sed

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

FILES = main.cpp class.cpp

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
		$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
	rm -fr $(OBJCS)

fclean :clean
	rm -fr $(NAME)
	rm -fr *.replace

re : fclean all

.PHONY :  all re clean fclean 