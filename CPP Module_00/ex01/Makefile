# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: botilia <botilia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 10:28:49 by botilia           #+#    #+#              #
#    Updated: 2022/06/01 11:56:10 by botilia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		PhoneBook

SRC =		Contact.cpp		\
			PhoneBook.cpp	\
			main.cpp		\

HEADER =	Contact.hpp \
			PhoneBook.hpp \

OBJ =		$(SRC:.cpp=.o)

CPP_FLAGS =	c++ -Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJ) $(HEADER) Makefile
	$(CPP_FLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

%.o: %.cpp $(HEADER)
	$(CPP_FLAGS) -c $<

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all re clean fclean