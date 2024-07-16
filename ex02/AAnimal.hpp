/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:32:13 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/29 12:22:21 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class AAnimal {
	protected:
		std::string		type;
	public:
		AAnimal();
		AAnimal(const std::string type);
		AAnimal(const AAnimal& original);
		AAnimal&		operator=(const AAnimal& original);
		virtual ~AAnimal();

		const std::string&				getType() const;
		virtual void					makeSound() const = 0;
};

#endif