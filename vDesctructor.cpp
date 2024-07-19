/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vDesctructor.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:18:28 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/19 11:24:45 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {
	public:
		Base() {
			std::cout << "Base Constructor\n";
		}
	
		virtual ~Base() {
			std::cout << "~Base Destructor\n";
		}
};

class Derived : public Base {
	public:
		Derived() {
			std::cout << "Derived Constructor\n";
		}
	
		~Derived() {
			std::cout << "~Derived Destructor\n";
		}
};

int main(void) {
	Base*	obj;

	obj = new Derived();

	delete obj;
}