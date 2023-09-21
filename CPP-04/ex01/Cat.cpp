/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:27:14 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 11:00:55 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "{Cat} Default constructor Called" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    *this = other;
    std::cout << "{Cat} Copy constructor Called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    this->type = other.type;
    delete this->brain;
    this->brain = new Brain();
    for (int i = 0; i < 100 ; i++)
         this->brain->setIdeas(i, other.brain->getIdeas(i));
    std::cout << "{Cat} Overload Copy Assignement Orerator Called." << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "{Cat} Destructor Called." << std::endl;
    delete this->brain;
}

/*********************************************************/

Cat::Cat(Brain *brain )
{
    this->brain = brain;
}

const std::string &Cat::getType() const
{
    return (this->type);
}


void Cat::makeSound() const
{
    std::cout << "Meaooo Meaoooo." << std::endl;
}

std::string  Cat::getIdea(int index) 
{
    if (index >= 0 && index < 100)
        return (this->brain->getIdeas(index));
    return ("err");
}

void Cat::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        this->brain->setIdeas(index , idea);
}

Brain* Cat::getBrain()
{
    return (this->brain);
}

void Cat::setBrain(Brain *brain)
{
    this->brain = brain;
}