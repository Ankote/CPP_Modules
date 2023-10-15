NAME = Bureaucrat

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp\
		Bureaucrat.cpp\
		AForm.cpp \
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\
		ShrubberyCreationForm.cpp\
		Intern.cpp

HEADERS =  	Bureaucrat.hpp\
			AForm.hpp \
			RobotomyRequestForm.hpp\
			PresidentialPardonForm.hpp\
			ShrubberyCreationForm.hpp\
			Intern.cpp

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS) $(HEADERS)
		$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
	rm -fr $(OBJCS) 

fclean : clean
	rm -fr $(NAME)

re : fclean all

.PHONY :  all re clean fclean 
