# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aankote <aankote@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 19:10:41 by aankote           #+#    #+#              #
#    Updated: 2023/09/02 22:03:55 by aankote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fighting

CXX = c++ -std=c++98

CPPFLAGS = -Wall -Wextra -Werror 

FILES = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
	$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
	rm -fr $(OBJCS)

fclean : clean
	rm -fr $(NAME)

re : fclean all