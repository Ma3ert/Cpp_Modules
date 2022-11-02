# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 18:50:55 by Ma3ert            #+#    #+#              #
#    Updated: 2022/11/02 11:06:16 by Ma3ert           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = account.cpp test.cpp

OBJ = $(SRC:.cpp=.o)

NAME = LostFile

HEADERS = account.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.c $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

hoho: all
	clear && ./$(NAME) && make fclean

sbrdl: all clean
	clear

re: fclean all