/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:41:21 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/28 14:17:19 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	private:
		Brain	*ptrToBrain;
	public:
		Cat();
		Cat(const std::string type);
		Cat(const Cat& original);
		Cat&	operator=(const Cat& original);
		~Cat();

		void				makeSound() const;
};

#endif