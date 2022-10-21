# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 11:41:17 by Ma3ert            #+#    #+#              #
#    Updated: 2022/10/21 16:52:37 by Ma3ert           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ClapTrap.cpp ../ex02/FragTrap.cpp DiamondTrap.cpp ../ex01/ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

NAME = FragTrap

HEADER = ClapTrap.hpp FragTrap.hpp DiamondTrap.hpp

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
	clear && ./$(NAME)

sbrdl: all clean
	clear

re: fclean all