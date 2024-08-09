/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:26:34 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/18 10:53:12 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Clappy");

    claptrap.attack("target1");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);
    claptrap.attack("target2");
    claptrap.takeDamage(20); // This should reduce hit points to 0
    claptrap.attack("target3"); // This should not work because hit points are 0
    claptrap.beRepaired(10); // This should not work because hit points are 0

    return 0;
}
