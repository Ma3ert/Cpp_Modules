# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 09:54:20 by Ma3ert            #+#    #+#              #
#    Updated: 2022/09/30 10:17:52 by Ma3ert           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

NAME = megaphone

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
	clear

re: fclean all