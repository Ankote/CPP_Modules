/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:44:37 by aankote           #+#    #+#             */
/*   Updated: 2023/09/16 15:14:48 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->_Name = "Boot";
    this->_HitPoint     = FragTrap::_HitPoint;
    this->_AttackDamage = ScavTrap::_AttackDamage;
    this->_EnergyPoint  = FragTrap::_EnergyPoint;
    std::cout << "A new DiamondTrap is born!"<< std::endl;
}
        
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    this->_Name         = other._Name;
    this->_HitPoint     = FragTrap::_HitPoint;
    this->_AttackDamage = ScavTrap::_AttackDamage;
    this->_EnergyPoint  = FragTrap::_EnergyPoint;
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
    this->_HitPoint = FragTrap::_HitPoint;
    this->_AttackDamage = ScavTrap::_AttackDamage;
    this->_EnergyPoint = FragTrap::_EnergyPoint;
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
