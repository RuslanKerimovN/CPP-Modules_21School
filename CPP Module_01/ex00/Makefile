# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: botilia <botilia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 12:59:07 by botilia           #+#    #+#              #
#    Updated: 2022/07/17 14:15:01 by botilia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie

SRC		=	$(wildcard *.cpp)

HEADER	=	$(wildcard *.h)

OBJ		=	$(SRC:.cpp=.o)

FLAGS	=	c++ -Wall -Wextra -Werror -std=c++98

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