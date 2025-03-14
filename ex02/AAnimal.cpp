/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:37:06 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/29 12:20:04 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	type = "AAnimal";
	std::cout << "AAnimal Class Default Constructor Called\n";
}

AAnimal::AAnimal(const std::string type) {
	this->type = type;
	std::cout << "AAnimal Class Param Constructor Called\n";
}

AAnimal::AAnimal(const AAnimal& original) {
	*this = original;
	std::cout << "AAnimal Class Copy Constructor Called\n";
}

AAnimal&		AAnimal::operator=(const AAnimal& original) {
	if (this != &original) {
		this->type = original.type;
		std::cout << "AAnimal Class Assignment Operator Called\n";
	}
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Class Destructor Called\n";
}

const std::string&	AAnimal::getType() const {
	return type;
}

void			AAnimal::makeSound() const {
	std::cout << "Generic AAnimal Sound!\n";
}
