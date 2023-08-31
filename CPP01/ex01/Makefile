# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aankote <aankote@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 12:23:33 by aankote           #+#    #+#              #
#    Updated: 2023/08/31 20:45:47 by aankote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CXX = c++ -std=c++98

CPPFLAGS = -Wall -Wextra -Werror

FILES = main.cpp Zombie.cpp zombieHorde.cpp 

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
		$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
		rm -fr $(OBJCS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re