/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:44:37 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 19:00:01 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
    this->_Name = "Boot";
    this->_HitPoint     = 100;
    this->_AttackDamage = 30;
    this->_EnergyPoint  = 100;
    std::cout << "A new DiamondTrap is born!"<< std::endl;
}
        
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    this->_Name         = other._Name;
    this->_HitPoint     = 100;
    this->_AttackDamage = 30;
    this->_EnergyPoint  = 100;
    std::cout << "A new DiamondTrap named " << other.getName() << " is being copied." << std::endl;
} 

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    this->_Name = other._Name;
    this->_HitPoint = FragTrap::_HitPoint;
    this->_AttackDamage = ScavTrap::_AttackDamage;
    this->_EnergyPoint = FragTrap::_EnergyPoint;
    return (*this);
}

DiamondTrap::DiamondTrap(std::string name)
:ClapTrap::ClapTrap(name + "_clap_name"), FragTrap::FragTrap(name),  ScavTrap::ScavTrap(name)
{
    this->_Name = name;
    this->_HitPoint = 100;
    this->_AttackDamage = 30;
    this->_EnergyPoint = 100;
    std::cout << "A new DiamondTrap named " << name << " is born!"<< std::endl;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "Goodbye, DiamondTrap! " << this->getName();
    std::cout << " is being destroyed." << std::endl;
}  

const std::string &DiamondTrap::getName() const
{
    return (this->_Name);
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name   : " << this->_Name<< std::endl;
    std::cout << "ClapTrap name      : " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::aff()
{
    std::cout << this->_Name << std::endl;
    std::cout <<this->_HitPoint << std::endl;
    std::cout <<  this->_AttackDamage  << std::endl;
    std::cout <<  this->_EnergyPoint;
}