# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: botilia <botilia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 13:26:34 by botilia           #+#    #+#              #
#    Updated: 2022/06/01 10:37:09 by botilia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		megaphone

SRC =		megaphone.cpp

OBJ =		$(SRC:.cpp=.o)

CPP_FLAGS =	c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJ)
		$(CPP_FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
