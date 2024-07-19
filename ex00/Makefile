# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 09:12:32 by nazouz            #+#    #+#              #
#    Updated: 2024/07/19 09:19:55 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			Polymorphism

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			Animal.hpp Dog.hpp Cat.hpp

SRCS			=			main.cpp Animal.cpp Dog.cpp Cat.cpp

OBJS			=			$(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp $(INCLUDES)
	$(CPP) -c $(CPPFLAGS) $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
