/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:26 by aankote           #+#    #+#             */
/*   Updated: 2023/09/22 14:48:47 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
	private :

		Brain *_catBrain;

	public :
	
		Cat();

		Cat(const Cat &other);

		Cat &operator=(const Cat &other);

		~Cat();

		Cat(Brain *_Cat_brain );
		
		const std::string &getType()  const;
		
		void makeSound() const;

		void setIdea(int index, std::string idea);

		std::string  getIdea(int index) ;

		Brain* getBrain();

		void setBrain(Brain *_catBrain);
};