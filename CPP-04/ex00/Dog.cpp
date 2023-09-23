/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:28:01 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 14:27:29 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    this->type = "Dog";
    std::cout << "{Dog} Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal("Unknown type")
{
    this->type = other.type;
    std::cout << "{Dog} Copy Costructor Called." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    this->type = other.type;
    std::cout << "{Dog}  Copy Assignement Operator." << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "{Dog} Destructor Called." << std::endl;
}

const std::string &Dog::getType() const
{
    return (this->type);
}


void Dog::makeSound() const
{
    std::cout << "Dog Sound" << std::endl;
}