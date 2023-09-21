# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aankote <aankote@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 15:15:47 by aankote           #+#    #+#              #
#    Updated: 2023/09/07 17:42:12 by aankote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror

FILES = main.cpp \
		Fixed.cpp \

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
	$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)

clean :
	rm -fr $(OBJCS)

fclean : clean
	rm -fr $(NAME)

re : fclean all

.PHONY : all re fclean clean
