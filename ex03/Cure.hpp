/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:40:09 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/19 19:39:20 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria {
	private:
		
	public:
		Cure();
		Cure(const std::string	type); // is it necessary?
		Cure(const Cure& original);
		Cure&		operator=(const Cure& original);
		~Cure();
		
		AMateria*	clone();
		void		use(ICharacter& target);
};

#endif