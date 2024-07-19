/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:20:31 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/19 19:38:33 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
	protected:
		// to-do
		std::string			type;
	public:
		AMateria();
		AMateria(const std::string& type);
		AMateria(const AMateria& original);
		AMateria&	operator=(const AMateria& original);
		~AMateria();

		std::string const &	getType() const;
		
		/*
			pure virtual functions, needs to be implemented in all subclasses
		*/ 
		virtual	AMateria*	clone() = 0;
		virtual	void		use(ICharacter& target);

};

#endif