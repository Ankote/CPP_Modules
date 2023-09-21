/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:42:28 by aankote           #+#    #+#             */
/*   Updated: 2023/09/20 16:16:22 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Wrong Cat Born" << std::endl;;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal("Unkmown type")
{
    this->type = other.type;
    std::cout << "WrongCat copied." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    this->type = other.type;
    std::cout << "WrongCat copied via copy assignment." << std::endl;
    return (*this);
}


WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed." << std::endl;
}

const std::string &WrongCat::getType() const
{
    return (this->type);
}


void WrongCat::makeSound() const
{
    std::cout << "Mooooooooooo!!." << std::endl;
}