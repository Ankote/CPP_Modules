# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aankote <aankote@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 12:18:21 by aankote           #+#    #+#              #
#    Updated: 2023/09/16 15:02:22 by aankote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = megaphone.cpp

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
		@echo "\n"
		@$(CXX) $(CPPFLAGS) $(OBJCS) -o $(NAME)
		@echo "\033[0;32mCompiling Megaphone..."

clean : 
		@echo "\033[0;33m\nRemoving binaries..."
		rm -fr $(OBJCS)

fclean : clean
		@echo "\nDeleting objects..."
		@echo "\nDeleting executable..."
		rm -fr $(NAME)

re : fclean all
