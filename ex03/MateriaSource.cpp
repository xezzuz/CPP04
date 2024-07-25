/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 19:57:01 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/22 12:13:32 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		materiasInventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource&	original) {
	*this = original;
}

MateriaSource&		MateriaSource::operator=(const MateriaSource&	original) {
	if (this != &original) {
		for (int i = 0; i < 4; i++) {
			if (materiasInventory[i]) {
				delete materiasInventory[i];
			}
			if (original.materiasInventory[i]) {
				materiasInventory[i] = original.materiasInventory[i]->clone();
			}
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (materiasInventory[i]) {
			delete materiasInventory[i];
		}
	}
}

void			MateriaSource::learnMateria(AMateria* m) {
	int				i;

	if (!m)
		return ;

	i = 0;
	while (i < 4) {
		if (!materiasInventory[i]) {
			materiasInventory[i] = m;
			return ;
		}
		i++;
	}
}

AMateria* 		MateriaSource::createMateria(std::string const & type) {
	int				i;

	i = 0;
	while (i < 4) {
		if (materiasInventory[i]->getType() == type) {
			return materiasInventory[i]->clone();
		}
		i++;
	}
	return 0;
}
