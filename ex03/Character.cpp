/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:41:52 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/19 19:40:48 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	this->name = "no-name";
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

Character::Character(const std::string	name) {
	this->name = name;
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

Character::Character(const Character&	original) {
	*this = original;
}

Character&		Character::operator=(const Character&	original) {
	if (this != &original) {
		this->name = original.getName();
		for (int i = 0; i < 4; i++) {
			if (inventory[i])
				delete inventory[i];
			if (original.inventory[i])
				inventory[i] = original.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inventory[i]) {
			delete inventory[i];
		}
	}
}

std::string	const & Character::getName() const {
	return name;
}

void 				Character::equip(AMateria* m) {
	int			i;

	if (!m)
		return ;

	i = 0;
	while (i < 4) {
		if (!inventory[i]) {
			inventory[i] = m;
			return ;
		}
		i++;
	}
}

void				Character::unequip(int idx) {
	if (idx > -1 && idx < 4) {
		// memory leak, store them somewhere
		inventory[idx] = NULL;
	}
}

void				Character::use(int idx, ICharacter& target) {
	if (idx > -1 && idx < 4 && inventory[idx]) {
		inventory[idx]->use(target);
	}
}
