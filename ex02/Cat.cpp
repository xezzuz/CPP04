/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:49:40 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/25 09:35:23 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	catBrain = new Brain();
	std::cout << "Cat Class Default Constructor Called\n";
}

Cat::Cat(const std::string type) {
	this->type = type;
	catBrain = new Brain();
	std::cout << "Cat Class Param Constructor Called\n";
}

Cat::Cat(const Cat& original) {
	*this = original;
	std::cout << "Cat Class Copy Constructor Called\n";
}

Cat&	Cat::operator=(const Cat& original) {
	if (this != &original) {
		this->type = original.type;
		delete catBrain;
		catBrain = new Brain(*original.catBrain);
		std::cout << "Cat Class Assignment Operator Called\n";
	}
	return *this;
}

Cat::~Cat() {
	delete catBrain;
	std::cout << "Cat Class Destructor Called\n";
}

void			Cat::makeSound() const {
	std::cout << "Meow!\n";
}

Brain*			Cat::getBrain() {
	return this->catBrain;
}
