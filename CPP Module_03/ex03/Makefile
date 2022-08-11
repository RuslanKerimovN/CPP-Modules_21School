# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: botilia <botilia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 13:16:24 by botilia           #+#    #+#              #
#    Updated: 2022/07/24 13:30:05 by botilia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	EXERCISE03

FLAGS	=	c++ -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

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