/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:32:33 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/28 13:43:05 by nazouz           ###   ########.fr       */
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
	if (this != &original) {
		// ideas = original.ideas;
	}
	std::cout << "Brain Class Copy Assignment Operator Called\n";
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain Class Destructor Called\n";
}
