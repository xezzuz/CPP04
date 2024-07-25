/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:38:36 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/22 14:33:12 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string			name;
		AMateria*			inventory[4];
		AMateria*			gCollector[1024];
		unsigned int		gCollElemCount;
	public:
		Character();
		Character(const std::string&	name);
		Character(const Character&	original);
		Character&		operator=(const Character&	original);
		~Character();
	
		std::string	const & getName() const;
		void 				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif