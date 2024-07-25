/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:54:21 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/23 11:01:30 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iomanip>

int main()
{
	// AAnimal*		anAnimal = new AAnimal(); // compiler error

	const AAnimal* aDog = new Dog();
	const AAnimal* aCat = new Cat();

	aDog->makeSound();
	aCat->makeSound();

	delete aDog;	// should not create a leak
	delete aCat;

	return 0;
}
