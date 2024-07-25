/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:54:21 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/25 08:59:59 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

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

	std::cout << std::string(45, '-') << std::endl;
	
	const WrongAnimal* ptrWrongAnimal = new WrongAnimal();
	const WrongAnimal* ptrWrongCat = new WrongCat();

	std::cout << ptrWrongAnimal->getType() << " " << std::endl;
	std::cout << ptrWrongCat->getType() << " " << std::endl;
	ptrWrongAnimal->makeSound();
	ptrWrongCat->makeSound();		// this should print WrongAnimal sound

	delete ptrWrongAnimal;
	delete ptrWrongCat;

	return 0;
}
