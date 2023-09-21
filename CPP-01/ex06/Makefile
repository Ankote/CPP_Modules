# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aankote <aankote@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 08:39:27 by aankote           #+#    #+#              #
#    Updated: 2023/09/03 11:21:26 by aankote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = harlFilter

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp \
		Harl.cpp

OBJCS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJCS)
	$(CXX) $(CXXFLAGS) $(OBJCS) -o $(NAME)

clean:
	rm -rf $(OBJCS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

