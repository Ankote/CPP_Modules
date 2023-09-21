/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:43:15 by aankote           #+#    #+#             */
/*   Updated: 2023/09/18 19:09:54 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Unknowen Animal";
    std::cout << "Wrong Animal Born" << std::endl;;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    this->type = other.type;
    std::cout << "WrongAnimal copied." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    this->type = other.type;
    std::cout << "WrongAnimal copied via copy assignment." << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "WrongAnimal created with type: " << this->type << std::endl;
}

const std::string &WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "This Animal makes a generic sound." << std::endl;
}
