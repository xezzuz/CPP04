/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:40:09 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/21 15:37:20 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"

/*
	CONCRETE CLASS - FROM - AMateria ABSTRACT CLASS
*/

class Ice : public AMateria {
	public:
		Ice();
		Ice(const std::string&	type);
		Ice(const Ice& original);
		Ice&		operator=(const Ice& original);
		~Ice();

		AMateria*	clone();
		void		use(ICharacter& target);
};

#endif