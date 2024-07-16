/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:24:58 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/28 13:32:23 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

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