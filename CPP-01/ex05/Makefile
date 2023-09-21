NAME = Harl

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror 

FILES = main.cpp \
		Harl.cpp

OBJCS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCS)
	$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean:
	rm -f $(OBJCS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: all clean fclean re
