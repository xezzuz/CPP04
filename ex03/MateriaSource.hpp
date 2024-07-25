/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 19:52:06 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/21 16:39:54 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*		materiasInventory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource&	original);
		MateriaSource&		operator=(const MateriaSource&	original);
		~MateriaSource();

		void			learnMateria(AMateria*);
		AMateria* 		createMateria(std::string const & type);
};

#endif