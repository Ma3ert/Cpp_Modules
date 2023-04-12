# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 11:41:17 by Ma3ert            #+#    #+#              #
#    Updated: 2023/04/12 13:56:45 by Ma3ert           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp PmergeMe.cpp

OBJ = $(SRC:.cpp=.o)

NAME = PmergeMe

HEADER =  PmergeMe.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

hoho: all
	clear && ./$(NAME) && make fclean

sbrdl: all clean
	clear

re: fclean all