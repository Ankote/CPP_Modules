/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:27:14 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 12:43:07 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "{Cat} Default constructor Called" << std::endl;
    _catBrain= new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    *this = other;
    std::cout << "{Cat} Copy constructor Called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    this->type = other.type;
    this->_catBrain = new Brain();
    for (int i = 0; i < 100 ; i++)
         this->_catBrain->setIdeas(i, other._catBrain->getIdeas(i));
    std::cout << "{Cat} Overload Copy Assignement Orerator Called." << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "{Cat} Destructor Called." << std::endl;
    delete this->_catBrain;
}

/*********************************************************/

Cat::Cat(Brain *brain )
{
    this->_catBrain = brain;
}

const std::string &Cat::getType() const
{
    return (this->type);
}


void Cat::makeSound() const
{
    std::cout << "Cat Sound" << std::endl;
}

std::string  Cat::getIdea(int index) 
{
    if (index >= 0 && index < 100)
        return (this->_catBrain->getIdeas(index));
    return ("err");
}

void Cat::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        this->_catBrain->setIdeas(index , idea);
}

Brain* Cat::getBrain()
{
    return (this->_catBrain);
}

void Cat::setBrain(Brain *brain)
{
    // delete this->brain;
    // this->brain = new Brain();
    for (int i = 0; i < 100 ; i++)
         this->_catBrain->setIdeas(i, brain->getIdeas(i));
}