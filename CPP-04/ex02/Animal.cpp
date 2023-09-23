/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:08 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 15:22:44 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


AAnimal::AAnimal()
{
    this->type = "Unknowen AAnimal";
    std::cout << "{AAnimal} Default constructor Called" << std::endl;;
}

AAnimal::AAnimal(const AAnimal &other)
{
    this->type = other.type;
    std::cout << "{AAnimal} Copy constructor Called." << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    this->type = other.type;
    std::cout << "{AAnimal} copied via copy assignment." << std::endl;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "{AAnimal} Destructor Called." << std::endl;
}

AAnimal::AAnimal(std::string type)
{
    this->type = type;
    std::cout << "{AAnimal} created with type: " << this->type << std::endl;
}

const std::string &AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::setType(std::string type)
{
    this->type = type;
}
