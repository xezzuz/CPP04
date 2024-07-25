# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 18:44:26 by nazouz            #+#    #+#              #
#    Updated: 2024/07/20 18:52:21 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			Materia

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			AMateria.hpp Character.hpp ICharacter.hpp MateriaSource.hpp \
							IMateriaSource.hpp Cure.hpp Ice.hpp

SRCS			=			AMateria.cpp Character.cpp MateriaSource.cpp Cure.cpp Ice.cpp main.cpp

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
