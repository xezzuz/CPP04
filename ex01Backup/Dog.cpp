/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:50:08 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/28 14:07:05 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	ptrToBrain = new Brain();
	std::cout << "Dog Class Default Constructor Called\n";
}

Dog::Dog(const std::string type) {
	this->type = type;
	ptrToBrain = new Brain();
	std::cout << "Dog Class Param Constructor Called\n";
}

Dog::Dog(const Dog& original) {
	*this = original;
	std::cout << "Dog Class Copy Constructor Called\n";
}

Dog&	Dog::operator=(const Dog& original) {
	if (this != &original) {
		this->type = original.type;
		this->ptrToBrain = new Brain();
		std::cout << "Dog Class Assignment Operator Called\n";
	}
	return *this;
}

Dog::~Dog() {
	delete ptrToBrain;
	std::cout << "Dog Class Destructor Called\n";
}

void			Dog::makeSound() const {
	std::cout << "Haw Haw!\n";
}
