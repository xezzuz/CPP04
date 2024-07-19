# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 13:16:52 by nazouz            #+#    #+#              #
#    Updated: 2024/07/19 13:17:10 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			AbstractClass

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			AAnimal.hpp Dog.hpp Cat.hpp Brain.hpp

SRCS			=			main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp

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
