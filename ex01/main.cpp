/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:54:21 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/29 11:38:32 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iomanip>

void	foo() {
	system("leaks a.out");
}

void	compareCopies(Cat& firstCopy, Cat& secondCopy) {
	std::cout << "\n\n\n<----------- DEEPCOPY TEST ----------->\n\n";
	std::cout << "Cat Object Address:\t\t" << &firstCopy
			  << "    |    " << &secondCopy << std::endl;
	std::cout << "Cat Brain Object Address:\t" << firstCopy.getBrain()
			  << "    |    " << secondCopy.getBrain() << std::endl;
	std::cout << "Cat Brain Ideas[0] Address:\t" << &(firstCopy.getBrain()->ideas[0])
			  << "    |    " << &(secondCopy.getBrain()->ideas[0]) << std::endl << std::endl;
}

int main()
{
	atexit(foo);

/*	<---------- SUBJECT TEST I ---------->	*/
	// const Animal* aDog = new Dog();
	// const Animal* aCat = new Cat();

	// delete aDog;	// should not create a leak
	// delete aCat;

/*	<---------- SUBJECT TEST II ---------->	*/
	Animal		*animals;

	/* animals = (Animal*)malloc (sizeof(Animal) * 10); */
	animals = new Animal[4];
	
	for (int i = 0; i < 2; i++) {
		animals[i] = Cat();
		std::cout << animals[i].getType() << std::endl;
	}
	for (int i = 2; i < 4; i++) {
		animals[i] = Dog();
		std::cout << animals[i].getType() << std::endl;
	}
	
	delete[] animals;

/*	<----------- DEEPCOPY TEST ----------->	*/
	// Cat	originalCat;
	// Cat	copiedCat(originalCat);
	// compareCopies(originalCat, copiedCat);
	return 0;
}
