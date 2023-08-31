/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:13:21 by aankote           #+#    #+#             */
/*   Updated: 2023/08/28 19:53:16 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon = NULL;
    this->name = name;
}

Weapon *HumanB::getWeapon()
{
    return (this->weapon);
}

void HumanB::setWeapon( Weapon & weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (!this->weapon)
    {
        std::cout <<  this->name << " Can't Attack ";
        std::cout << "He must hide!!!!" << std::endl;
    }
    else 
    {
        std::cout << this->name;
        std::cout << " attacks with their ";
        std::cout << this->weapon->getType();
        std::cout << std::endl;
    }
}
