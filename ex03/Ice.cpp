/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:39:51 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/19 19:41:24 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	type = "ice";
}

Ice::Ice(const Ice& original) {
	*this = original;
}

Ice&		Ice::operator=(const Ice& original) {
	if (this != &original) {
		type = original.type;
	}
	return *this;
}

Ice::~Ice() {
	
}

AMateria*	Ice::clone() {
	return new Ice(type);
}

void		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}