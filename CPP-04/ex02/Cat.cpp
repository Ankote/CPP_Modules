/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:27:14 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 15:56:37 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    this->type = "Cat";
    std::cout << "{Cat} Default constructor Called" << std::endl;;
}

Cat::Cat(const Cat &other) : AAnimal("Unknoun type")
{
    this->type = other.type;
    std::cout << "{Cat} Copy constructor Called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    this->type = other.type;
    std::cout << "Cat Copy Assignement Operator Called." << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "{Cat} Destructor Call." << std::endl;
}

const std::string &Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "Cat Sound." << std::endl;
}
