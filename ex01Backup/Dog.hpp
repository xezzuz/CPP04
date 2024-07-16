/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:41:11 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/28 14:21:06 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	private:
		Brain	*ptrToBrain;
	public:
		Dog();
		Dog(const std::string type);
		Dog(const Dog& original);
		Dog&	operator=(const Dog& original);
		~Dog();

		void				makeSound() const;
};

#endif