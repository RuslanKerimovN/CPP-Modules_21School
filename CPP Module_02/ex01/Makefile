# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: botilia <botilia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 16:12:50 by botilia           #+#    #+#              #
#    Updated: 2022/07/20 16:13:29 by botilia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	EXERCISE01

FLAGS	=	c++ -Wall -Wextra -Werror -std=c++98

SRC		=	$(wildcard *.cpp)

HEADER	=	$(wildcard *.hpp)

OBJ		=	$(SRC:.cpp=.o)

$(NAME):	$(OBJ) $(HEADER) Makefile
	@$(FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

%.o: %.cpp $(HEADER)
	@$(FLAGS) -c $<

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all re clean fclean