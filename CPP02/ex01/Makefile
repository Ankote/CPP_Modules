# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aankote <aankote@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 16:39:27 by aankote           #+#    #+#              #
#    Updated: 2023/09/10 15:18:04 by aankote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -stc=c++98

FILES = main.cpp Fixed.cpp

OBJCS = $(FILES:.cpp=.o)

RUN = $(CXX) $(CPPFLAGS) $(OBJCS)

all : $(NAME)

$(NAME) : $(OBJCS)
	$(RUN) -o $(NAME)

clean :
	rm -fr $(OBJCS)

fclean : clean
	rm -fr $(NAME)

re : fclean all

./PHONY : all clean fclean re

