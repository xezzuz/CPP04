/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:54:21 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/28 14:28:56 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	ff() {
	system ("leaks a.out");
}

int main()
{
	atexit(ff);
	Animal	*animals = new Animal[4];

	std::cout << "<-------------------------------------------------->\n";

	int i = 0;
	while (i < 2) {
		animals[i++] = Cat();
		std::cout << "<-------------------------------------------------->\n";
	}
	while (i < 4) {
		animals[i++] = Dog();
		std::cout << "<-------------------------------------------------->\n";
	}

	delete[] animals;
	return 0;
}
