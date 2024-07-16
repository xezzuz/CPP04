/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:54:21 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/28 13:19:56 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	// Animal		animal;
	// Dog			dog;
	// Cat			cat;

	// std::cout << animal.getType() << "\n";
	// animal.makeSound();
	// std::cout << dog.getType() << "\n";
	// dog.makeSound();
	// std::cout << cat.getType() << "\n";
	// cat.makeSound();

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

	// wrongCat wrongAnimal
	return 0;
}
