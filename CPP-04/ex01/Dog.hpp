/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:31 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 10:44:46 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :

		Brain *brain;

	public :
	
		Dog();

		Dog(const Dog &other);

		Dog &operator=(const Dog &other);

		~Dog();

		Dog(Brain *brain );
		
		const std::string &getType()  const;
		
		void makeSound() const;

		void setIdea(int index, std::string idea);

		std::string  getIdea(int index) ;

		Brain* getBrain();

		void setBrain(Brain *brain);
};