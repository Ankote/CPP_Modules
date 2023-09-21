/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:50:07 by aankote           #+#    #+#             */
/*   Updated: 2023/09/20 16:16:04 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongDog.hpp"


WrongDog::WrongDog()
{
    this->type = "WrongDog";
    std::cout << "Wrong Dog Born" << std::endl;
}

WrongDog::WrongDog(const WrongDog &other) : WrongAnimal("Unkmown type")
{
    this->type = other.type;
    std::cout << "WrongDog copied." << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &other)
{
    this->type = other.type;
    std::cout << "WrongDog copied via copy assignment." << std::endl;
    return (*this);
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog destroyed." << std::endl;
}

const std::string &WrongDog::getType() const
{
    return (this->type);
}


void WrongDog::makeSound() const
{
    std::cout << "Hoooow Hooooow." << std::endl;
}