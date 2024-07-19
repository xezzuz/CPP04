/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:54:21 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/19 11:50:14 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// Constructors and destructors of each class must display specific messages.

int main(void) {
	const Animal* ptrAnimal = new Animal();
	const Animal* ptrDog = new Dog();
	const Animal* ptrCat = new Cat();

	std::cout << ptrAnimal->getType() << " " << std::endl;
	std::cout <<ptrDog->getType() << " " << std::endl;
	std::cout << ptrCat->getType() << " " << std::endl;
	ptrAnimal->makeSound();
	ptrDog->makeSound();
	ptrCat->makeSound();

	delete ptrAnimal;
	delete ptrDog;
	delete ptrCat;

	return 0;
}
