/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:39:51 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/25 09:36:47 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	type = "cure";
}

Cure::Cure(const std::string&	type) {
	this->type = type;
}

Cure::Cure(const Cure& original) {
	*this = original;
}

Cure&		Cure::operator=(const Cure& original) {
	if (this != &original)
		type = original.type;
	return *this;
}

Cure::~Cure() {
	// nothing to be cleaned
}

AMateria*	Cure::clone() {
	return new Cure(type);
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
