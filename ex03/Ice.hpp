/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:40:09 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/19 19:39:27 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria {
	private:
		
	public:
		Ice();
		Ice(const std::string	type); // is it necessary?
		Ice(const Ice& original);
		Ice&		operator=(const Ice& original);
		~Ice();
		
		AMateria*	clone();
		void		use(ICharacter& target);
};

#endif