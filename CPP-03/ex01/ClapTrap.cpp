/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:59:47 by aankote           #+#    #+#             */
/*   Updated: 2023/09/16 15:54:48 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_HitPoint     = 10;
    this->_EnergyPoint  = 10;
    this->_AttackDamage = 0;
    std::cout << "A new ClapTrap is born!"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    this->_Name         = other._Name;
    this->_AttackDamage = other._AttackDamage;
    this->_EnergyPoint  = other._EnergyPoint;
    this->_HitPoint     = other._HitPoint;
    std::cout << "A new ClapTrap named " << other._Name << " is being copied." << std::endl;
    
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    this->_Name         = other._Name;
    this->_AttackDamage = other._AttackDamage;
    this->_EnergyPoint  = other._EnergyPoint;
    this->_HitPoint     = other._HitPoint;
    std::cout << "ClapTrap " << " is being assigned the values of " << other._Name << "." << std::endl;
    return (*this);
}
  
ClapTrap::ClapTrap(std::string name)
{  
    this->_HitPoint     = 10;
    this->_EnergyPoint  = 10; 
    this->_AttackDamage = 0;
    this->_Name         = name;
    std::cout << "A new ClapTrap named " << name << " is born!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_HitPoint > 0 && this->_EnergyPoint )
    {
        std::cout <<"• ClapTrap (" << this->_Name ;
        std::cout <<  ") attacks (" << target;
        std::cout << ") causing " <<this->_AttackDamage <<  " points of damage!"<< std::endl;
        this->_EnergyPoint --;
    }
    else
    {
        std::cout << "•• ClapTrap " << this->_Name;
        std::cout << " can't attack. No hit points or energy points left." << std::endl;
    }
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_HitPoint > 0  && this->_EnergyPoint)
    {
        this->_HitPoint += amount;
        this->_EnergyPoint --;
        std::cout << "• ClapTrap " << this->_Name << " repairs itself and gains ";
        std::cout << amount << " hit points. Hit points remaining: " << this->_HitPoint << std::endl;
    }
    else 
    {
        std::cout << "•• ClapTrap " << this->_Name << " is already destroyed and can't be repaired." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_HitPoint > 0  && this->_EnergyPoint)
    {
        if (amount > (unsigned int)this->_HitPoint)
        {
            this->_HitPoint    = 0;
            this->_EnergyPoint = 0;
            std::cout << "• ClapTrap " << this->_Name << " takes " << amount << " damage and is destroyed." << std::endl;
        }
        else
        {
            this->_HitPoint -= amount;
            std::cout << "• ClapTrap " << this->_Name << " takes " << amount << " damage. Hit points remaining: " << this->_HitPoint << std::endl;
        }
    } 
    else
    {
            std::cout << "•• ClapTrap " << this->_Name << " is already destroyed and can't take more damage." << std::endl;
    }
}

const int &ClapTrap::getHitpoint () const 
{
    return (this->_HitPoint);
}

const int &ClapTrap::getAttackDamage() const 
{
    return (this->_AttackDamage);
}

const int &ClapTrap::getEnergyPoint() const 
{
    return (this->_EnergyPoint);
}

const std::string &ClapTrap::getName() const
{
    return (this->_Name);
}

void ClapTrap::setHitpoint (int hitP)
{
    this->_HitPoint = hitP;
}

void ClapTrap::setAttackDamage(int atD)
{
    this->_AttackDamage = atD;
}

void ClapTrap::setEnergyPoint(int eP)
{
    this->_EnergyPoint = eP;
}

void ClapTrap::setName(std::string name)
{
    this->_Name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << std::endl;
    std::cout << this->_Name << " Infos   : " << std::endl;
    std::cout << "\t\t\tHit Points  : " << this->_HitPoint << std::endl;
    std::cout << "\t\t\tEnergyPoint : " << this->_EnergyPoint << std::endl;
     std::cout << "Goodbye, ClapTrap! " << this->_Name << " is being destroyed." << std::endl;
}
