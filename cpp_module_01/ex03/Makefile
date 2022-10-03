# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 16:03:28 by Ma3ert            #+#    #+#              #
#    Updated: 2022/10/03 18:23:24 by Ma3ert           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp HumanA.cpp Weapon.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

NAME = violence

HEADER = HumanA.hpp HumanB.hpp Weapon.hpp 

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

hoho: all clean
	clear && ./$(NAME)

re: fclean all