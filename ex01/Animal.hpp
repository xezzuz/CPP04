/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:32:13 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/19 11:49:13 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class Animal {
	protected:
		std::string		type;
	public:
		Animal();
		Animal(const std::string type);
		Animal(const Animal& original);
		Animal&		operator=(const Animal& original);
		virtual ~Animal();

		const std::string&				getType() const;
		virtual void					makeSound() const;
};

#endif