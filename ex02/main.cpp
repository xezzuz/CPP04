/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:26:34 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/11 16:59:39 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // ClapTrap claptrap("Clappy");
    FragTrap fragtrap("Fraggy");

    // claptrap.attack("target1");
    // claptrap.takeDamage(3);
    // claptrap.beRepaired(5);
    // claptrap.attack("target2");
    // claptrap.takeDamage(20);
    // claptrap.attack("target3");
    // claptrap.beRepaired(10);

    fragtrap.attack("target1");
    fragtrap.takeDamage(3);
    fragtrap.beRepaired(5);
    fragtrap.attack("target2");
    fragtrap.takeDamage(20);
    fragtrap.attack("target3");
    fragtrap.beRepaired(10);

    fragtrap.highFiveGuys();
    
    return 0;
}
