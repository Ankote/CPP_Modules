# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aankote <aankote@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 14:33:19 by aankote           #+#    #+#              #
#    Updated: 2023/09/08 22:15:59 by aankote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror

FILES = main.cpp Fixed.cpp

OBJCS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCS)
	$(CXX) $(CXXFLAGS) $(OBJCS) -o $(NAME)

clean:
	rm -f $(OBJCS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: all clean fclean re
