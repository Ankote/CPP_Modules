# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aankote <aankote@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 16:39:27 by aankote           #+#    #+#              #
#    Updated: 2023/09/09 16:39:30 by aankote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


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

