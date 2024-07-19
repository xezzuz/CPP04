/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:37:06 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/19 11:26:37 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	type = "Animal";
	std::cout << "Animal Class Default Constructor Called\n";
}

Animal::Animal(const std::string type) {
	this->type = type;
	std::cout << "Animal Class Param Constructor Called\n";
}

Animal::Animal(const Animal& original) {
	*this = original;
	std::cout << "Animal Class Copy Constructor Called\n";
}

Animal&		Animal::operator=(const Animal& original) {
	if (this != &original) {
		this->type = original.type;
		std::cout << "Animal Class Assignment Operator Called\n";
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "~Animal Class Destructor Called\n";
}

const std::string&	Animal::getType() const {
	return type;
}

void			Animal::makeSound() const {
	std::cout << "Generic Animal Sound!\n";
}
