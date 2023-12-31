/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:08 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 13:02:10 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    this->type = "Unknowen Animal";
    std::cout << "{Animal} Default constructor Called" << std::endl;;
}

Animal::Animal(const Animal &other)
{
    this->type = other.type;
    std::cout << "{Animal} Copy constructor Called." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    this->type = other.type;
    std::cout << "{Animal} copied via copy assignment." << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "{Animal} Destructor Called." << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "{Animal} created with type: " << this->type << std::endl;
}

const std::string &Animal::getType() const
{
    return (this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound() const
{
    std::cout << "This animal makes a generic sound." << std::endl;
}
