# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 14:43:08 by nazouz            #+#    #+#              #
#    Updated: 2024/07/11 16:50:26 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			ScavTrap

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			ClapTrap.hpp ScavTrap.hpp

SRCS			=			main.cpp ClapTrap.cpp ScavTrap.cpp

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
