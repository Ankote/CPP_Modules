# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aankote <aankote@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 14:33:19 by aankote           #+#    #+#              #
#    Updated: 2023/09/06 18:24:51 by aankote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror

FILES = main.cpp Fixed.cpp

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: all clean fclean re
