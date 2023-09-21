/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:28:01 by aankote           #+#    #+#             */
/*   Updated: 2023/09/20 16:15:12 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Hi I am A Dog" << std::endl;
}

Dog::Dog(const Dog &other) : Animal("Unknown type")
{
    this->type = other.type;
    std::cout << "Dog copied." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    this->type = other.type;
    std::cout << "Dog copied via copy assignment." << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destroyed." << std::endl;
}

const std::string &Dog::getType() const
{
    return (this->type);
}


void Dog::makeSound() const
{
    std::cout << "Hoooow Hooooow." << std::endl;
}