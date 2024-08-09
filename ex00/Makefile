# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 13:04:28 by nazouz            #+#    #+#              #
#    Updated: 2024/07/11 13:53:49 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			ClapTrap

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			ClapTrap.hpp

SRCS			=			main.cpp ClapTrap.cpp

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
