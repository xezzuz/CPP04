/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:06:30 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/11 16:45:37 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	name = "n\a";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "Derived Class Default Constructor Called\n";
}

FragTrap::FragTrap(std::string Name) {
	name = Name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " has been created\n";
}

FragTrap::FragTrap(const FragTrap& original) {
	*this = original;
	std::cout << "FragTrap " << name << " has been copied\n";
}

FragTrap&	FragTrap::operator=(const FragTrap& original) {
	if (this != &original) {
		name = original.name;
		hitPoints = original.hitPoints;
		energyPoints = original.energyPoints;
		attackDamage = original.attackDamage;
		std::cout << "FragTrap " << name << " has been assigned\n";
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " has been destroyed\n";
}

void	FragTrap::highFiveGuys() {
	std::cout << "FragTrap " << name << " is requesting a high five.\n";
}
