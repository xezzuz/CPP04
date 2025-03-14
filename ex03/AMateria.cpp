/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:23:50 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/21 15:33:52 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

/*
	ABSTRACT CLASS - AMateria
*/

AMateria::AMateria() {
	type = "no-type";
}

AMateria::AMateria(const std::string& type) {
	this->type = type;
}

AMateria::AMateria(const AMateria& original) {
	*this = original;
}

AMateria&	AMateria::operator=(const AMateria& original) {
	if (this != &original)
		this->type = original.getType();
	return *this;
}

AMateria::~AMateria() {
	// nothing to be cleaned
}

std::string const &	AMateria::getType() const {
	return type;
}

void		AMateria::use(ICharacter& target) {
	std::cout << "AMateria shoots at a target named: " << target.getName();
}
