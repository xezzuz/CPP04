/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:24:58 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/28 17:56:52 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
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