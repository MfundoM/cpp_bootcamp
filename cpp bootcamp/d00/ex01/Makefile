# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/05 16:32:28 by mmthethw          #+#    #+#              #
#    Updated: 2018/06/05 16:39:10 by mmthethw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = Contacts.class.cpp \
	   welcome-Display.cpp \
	   trancate.cpp \
	   main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
