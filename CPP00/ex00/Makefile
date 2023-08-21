# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aankote <aankote@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 12:18:21 by aankote           #+#    #+#              #
#    Updated: 2023/08/16 14:33:57 by aankote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Megaphone

CXX = clang++

CPPFLAGS = -Wall -Wextra -Werror

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
