/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:24:58 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/29 12:20:28 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"
#include <iostream>

class Brain {
	public:
		std::string		ideas[100];

		Brain();
		// param constructor?
		Brain(const Brain& original);
		Brain& operator=(const Brain& original);
		~Brain();
};

#endif