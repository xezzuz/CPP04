/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:32:33 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/19 11:26:40 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Class Default Constructor Called\n";
}

Brain::Brain(const Brain& original) {
	*this = original;
	std::cout << "Brain Class Copy Constructor Called\n";
}

Brain& Brain::operator=(const Brain& original) {
	int			i;
	if (this != &original) {
		i = -1;
		while (++i < 100) {
			this->ideas[i] = original.ideas[i];
		}
	}
	std::cout << "Brain Class Copy Assignment Operator Called\n";
	return *this;
}

Brain::~Brain() {
	std::cout << "~Brain Class Destructor Called\n";
}
