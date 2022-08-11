# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: botilia <botilia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 16:53:30 by botilia           #+#    #+#              #
#    Updated: 2022/07/19 16:53:35 by botilia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Harl

SRC		=	$(wildcard *.cpp)

OBJ		=	$(SRC:.cpp=.o)

FLAGS	=	c++ -Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJ) Makefile
	@$(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

%.o: %.cpp
	@$(FLAGS) -c $<

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all re clean fclean