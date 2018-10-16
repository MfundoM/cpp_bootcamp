# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/14 11:56:23 by mmthethw          #+#    #+#              #
#    Updated: 2018/06/14 11:56:24 by mmthethw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
SRC = whatever.cpp

OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		@clang++ $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ) :
		@clang++ $(FLAGS) $*.cpp -o $@ -c

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean format re
