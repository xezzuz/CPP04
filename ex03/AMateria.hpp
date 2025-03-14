/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:20:31 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/21 15:40:16 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;


/*
	ABSTRACT CLASS
*/


/*
	AMateria can't be initiated, so why do we need OCF?
*/

class AMateria
{
	protected:
		std::string			type;

	public:
		AMateria();
		AMateria(const std::string& type);
		AMateria(const AMateria& original);
		AMateria&	operator=(const AMateria& original);
		virtual ~AMateria();

		std::string const &	getType() const;			// materia type getter

		virtual	AMateria*	clone() = 0;				// returns a clone-allocated *this materia copy
		virtual	void		use(ICharacter& target);	// use *this materia on a target a.k.a Character

};

#endif