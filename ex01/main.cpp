/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:26:34 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/18 10:49:29 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // ClapTrap claptrap("Clappy");
    ScavTrap scavtrap("Scavvy");

    // claptrap.attack("target1");
    // claptrap.takeDamage(3);
    // claptrap.beRepaired(5);
    // claptrap.attack("target2");
    // claptrap.takeDamage(20);
    // claptrap.attack("target3");
    // claptrap.beRepaired(10);

    scavtrap.attack("target1");
    scavtrap.takeDamage(3);
    scavtrap.beRepaired(5);
    scavtrap.attack("target2");
    scavtrap.takeDamage(20);
    scavtrap.attack("target3");
    scavtrap.beRepaired(10);

    scavtrap.guardGate();
    
    return 0;
}
