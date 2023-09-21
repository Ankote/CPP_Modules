/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:28:01 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 10:45:14 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    this->type = "Dog";
    std::cout << "{Dog} Default constructor Called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    *this = other;
    std::cout << "{Dog} Copy constructor Called." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    
    this->type = other.type;
    this->brain = new Brain();
    for (int i = 0; i < 100 ; i++)
         this->brain->setIdeas(i, other.brain->getIdeas(i));
    std::cout << "{Dog} Overload Copy Assignement Orerator Called." << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "{Dog} Destructor Called." << std::endl;
    delete this->brain;
}

/*********************************************************/

Dog::Dog(Brain *brain )
{
    this->brain = brain;
}

const std::string &Dog::getType() const
{
    return (this->type);
}


void Dog::makeSound() const
{
    std::cout << "Houuuwww  Houuuuuw." << std::endl;
}

std::string  Dog::getIdea(int index) 
{
    if (index >= 0 && index < 100)
        return (this->brain->getIdeas(index));
    return ("err");
}

void Dog::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        this->brain->setIdeas(index , idea);
}

Brain* Dog::getBrain()
{
    return (this->brain);
}

void Dog::setBrain(Brain *brain)
{
    this->brain = brain;
}
