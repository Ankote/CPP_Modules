/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:13:40 by aankote           #+#    #+#             */
/*   Updated: 2023/09/16 11:47:51 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
   this->setName("BOOT");
   this->setHitPoint(100);
   this->setEnergyPoint(50);
   this->setAttackDamage(20);
   std::cout << "ClapTrap BOOT Become ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap (other)
{
   std::cout << "A new ScavTrap named " << other.getName() << " is being copied." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) 
{
   ClapTrap::operator=(other);
   std::cout << "A new ScavTrap named " << other.getName() << " is being copied." << std::endl;
   return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->getHitpoint()> 0 && this->getEnergyPoint() )
    {
        std::cout <<"• ScavTrap (" << this->_Name ;
        std::cout <<  ") attacks (" << target;
        std::cout << ") causing " <<this->getAttackDamage() <<  " points of damage!"<< std::endl;
        this->setHitPoint(this->getHitpoint() - 1);
    }
    else
    {
        std::cout << "•• ScavTrap " << this->getName();
        std::cout << " can't attack. No hit points or energy points left." << std::endl;
    }
}

ScavTrap::~ScavTrap()
{
   std::cout << "ScavTrap " << this->getName() << " Good by" << std::endl;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap (name)
{
   this->setHitPoint(100);
   this->setEnergyPoint(50);
   this->setAttackDamage(20);
   std::cout << "ClapTrap (" << ClapTrap::_Name << ") Become ScavTrap!" << std::endl;
}

void ScavTrap::guardGate()
{
   std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
