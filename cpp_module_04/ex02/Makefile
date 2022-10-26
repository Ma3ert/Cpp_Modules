# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 11:29:48 by Ma3ert            #+#    #+#              #
#    Updated: 2022/10/26 14:19:43 by Ma3ert           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Dog.cpp Cat.cpp Brain.cpp AbstractAnimal.cpp

OBJ = $(SRC:.cpp=.o)

NAME = AbstractAnimal

HEADER = Cat.hpp Dog.hpp AbstractAnimal.hpp Brain.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

hoho: all clean
	@clear && ./$(NAME)

sbrdl: all clean
	clear

re: fclean all