/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:37:06 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/23 10:11:25 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type = "WrongAnimal";
	std::cout << "WrongAnimal Class Default Constructor Called\n";
}

WrongAnimal::WrongAnimal(const std::string type) {
	this->type = type;
	std::cout << "WrongAnimal Class Param Constructor Called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& original) {
	*this = original;
	std::cout << "WrongAnimal Class Copy Constructor Called\n";
}

WrongAnimal&		WrongAnimal::operator=(const WrongAnimal& original) {
	if (this != &original) {
		this->type = original.type;
		std::cout << "WrongAnimal Class Assignment Operator Called\n";
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Class Destructor Called\n";
}

const std::string&	WrongAnimal::getType() const {
	return type;
}

void			WrongAnimal::makeSound() const {
	std::cout << "Generic WrongAnimal Sound!\n";
}
