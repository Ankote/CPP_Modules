/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:27:14 by aankote           #+#    #+#             */
/*   Updated: 2023/09/20 16:44:19 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Hi I am A Cat" << std::endl;;
}

Cat::Cat(const Cat &other) : Animal("Unknoun type")
{
    this->type = other.type;
    std::cout << "Cat copied." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    this->type = other.type;
    std::cout << "Cat copied via copy assignment." << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destroyed." << std::endl;
}

const std::string &Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "Meaooo Meaoooo." << std::endl;
}