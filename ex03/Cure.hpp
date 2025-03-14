/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:40:09 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/21 15:37:12 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"

/*
	CONCRETE CLASS - FROM - AMateria ABSTRACT CLASS
*/

class Cure : public AMateria {
	public:
		Cure();
		Cure(const std::string&	type);
		Cure(const Cure& original);
		Cure&		operator=(const Cure& original);
		~Cure();
		
		AMateria*	clone();
		void		use(ICharacter& target);
};

#endif