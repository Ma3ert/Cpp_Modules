# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 15:40:55 by Ma3ert            #+#    #+#              #
#    Updated: 2022/10/03 15:57:23 by Ma3ert           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = HI

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

hoho: all clean
	clear && ./$(NAME)

re: fclean all