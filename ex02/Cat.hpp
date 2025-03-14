/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:41:21 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/29 12:20:53 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal {
	private:
		Brain		*catBrain;
	public:
		Cat();
		Cat(const std::string type);
		Cat(const Cat& original);
		Cat&	operator=(const Cat& original);
		~Cat();

		void				makeSound() const;
		Brain*				getBrain();
};

#endif