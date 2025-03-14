/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:49:40 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/23 10:32:07 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "WrongCat Class Default Constructor Called\n";
}

WrongCat::WrongCat(const std::string type) {
	this->type = type;
	std::cout << "WrongCat Class Param Constructor Called\n";
}

WrongCat::WrongCat(const WrongCat& original) {
	*this = original;
	std::cout << "WrongCat Class Copy Constructor Called\n";
}

WrongCat&	WrongCat::operator=(const WrongCat& original) {
	if (this != &original) {
		this->type = original.type;
		std::cout << "WrongCat Class Assignment Operator Called\n";
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Class Destructor Called\n";
}

void			WrongCat::makeSound() const {
	std::cout << "Meow!\n";
}
