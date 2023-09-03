# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aankote <aankote@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 09:02:22 by aankote           #+#    #+#              #
#    Updated: 2023/09/03 09:57:16 by aankote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CXX = c++ -std=c++98

CPPFLAGS = -Wall -Wextra -Werror

FILES = Zombie.cpp      \
		newZombie.cpp   \
		randomChump.cpp \
		main.cpp        \
	
OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
		$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)
	
clean : 
	rm -fr $(OBJCS)

fclean : clean
		rm -fr $(NAME)

re : fclean all
