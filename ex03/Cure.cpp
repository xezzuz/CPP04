/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:39:51 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/19 19:41:16 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	type = "cure";
}

Cure::Cure(const Cure& original) {
	*this = original;
}

Cure&		Cure::operator=(const Cure& original) {
	if (this != &original) {
		type = original.type;
	}
	return *this;
}

Cure::~Cure() {
	
}

AMateria*	Cure::clone() {
	return new Cure(type);
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
