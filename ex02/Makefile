# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 16:50:34 by nazouz            #+#    #+#              #
#    Updated: 2024/07/11 16:58:53 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			FragTrap

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

SRCS			=			main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

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
