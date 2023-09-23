/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:28:01 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 14:34:57 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/************************Orthodox Canonical*********************/
Dog::Dog()
{
    this->type = "Dog";
    std::cout << "{Dog} Default constructor Called" << std::endl;
    _dogBrain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    *this = other;
    std::cout << "{Dog} Copy constructor Called." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    
    this->type = other.type;
    this->_dogBrain = new Brain();
    for (int i = 0; i < 100 ; i++)
         this->_dogBrain->setIdeas(i, other._dogBrain->getIdeas(i));
    std::cout << "{Dog} Overload Copy Assignement Orerator Called." << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "{Dog} Destructor Called." << std::endl;
    delete this->_dogBrain;
}

/**************************ex00*******************************/

Dog::Dog(Brain *brain )
{
    this->_dogBrain = brain;
}

const std::string &Dog::getType() const
{
    return (this->type);
}


void Dog::makeSound() const
{
    std::cout << "Dog Sound" << std::endl;
}

/******************************ex01*****************************/
std::string  Dog::getIdea(int index) 
{
    if (index >= 0 && index < 100)
        return (this->_dogBrain->getIdeas(index));
    return ("err");
}

void Dog::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        this->_dogBrain->setIdeas(index , idea);
}

Brain* Dog::getBrain()
{
    return (this->_dogBrain);
}

void Dog::setBrain(Brain *brain)
{
    // delete this->brain;
    // this->brain = new Brain();
    for (int i = 0; i < 100 ; i++)
         this->_dogBrain->setIdeas(i, brain->getIdeas(i));
}
