/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:26:17 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/18 10:28:02 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	name = "n\a";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap Class Default Constructor Called\n";
}

ScavTrap::ScavTrap(std::string Name) {
	name = Name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " has been created\n";
}

ScavTrap::ScavTrap(const ScavTrap& original) {
	*this = original;
	std::cout << "ScavTrap " << name << " has been copied\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& original) {
	if (this != &original) {
		this->name = original.name;
		this->hitPoints = original.hitPoints;
		this->energyPoints = original.energyPoints;
		this->attackDamage = original.attackDamage;
		std::cout << "ScavTrap " << name << " has been assigned\n";
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " has been destroyed\n";
}

void		ScavTrap::attack(const std::string& target) {
	if (!this->energyPoints || !this->hitPoints) {
		std::cout << "ScavTrap " << this->name << " can't attack " << target << " because energyPoints = 0 or HP = 0 !\n";
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\n";
	this->energyPoints--;
}

void		ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in gate keeper mode\n";
}
