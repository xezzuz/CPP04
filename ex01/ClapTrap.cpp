/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:27:02 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/11 14:47:10 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap Class Default Constructor Called\n";
}

ClapTrap::ClapTrap(std::string Name) {
	name = Name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap " << name << " has been created\n";
}

ClapTrap::ClapTrap(const ClapTrap& original) {
	*this = original;
	std::cout << "ClapTrap " << name << " has been copied\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& original) {
	if (this != &original) {
		this->name = original.name;
		this->hitPoints = original.hitPoints;
		this->energyPoints = original.energyPoints;
		this->attackDamage = original.attackDamage;
		std::cout << "ClapTrap " << name << " has been assigned\n";
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " has been destroyed\n";
}

void		ClapTrap::attack(const std::string& target) {
	if (!this->energyPoints || !this->hitPoints) {
		std::cout << "ClapTrap " << this->name << " can't attack " << target << " because energyPoints = 0 or HP = 0 !\n";
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\n";
	this->energyPoints--;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	if (!this->hitPoints)
		std::cout << "ClapTrap " << this->name << " is already dead, he can't take any more damage!\n";
	else if (amount >= this->hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " took damage of " << amount << ", current HP = " << this->hitPoints << "!\n";
}

void		ClapTrap::beRepaired(unsigned int amount) {
	if (!this->energyPoints || !this->hitPoints) {
		std::cout << "ClapTrap " << this->name << " can't heal himself because energyPoints = 0 or HP = 0 !\n";
		return ;
	}
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " healed himself with " << amount << "HP points, current HP = " << this->hitPoints << "!\n";
	this->energyPoints--;
}
