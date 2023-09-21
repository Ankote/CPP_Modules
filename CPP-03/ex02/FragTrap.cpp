/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:01:57 by aankote           #+#    #+#             */
/*   Updated: 2023/09/16 14:30:54 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->setHitPoint(100);
    this->setEnergyPoint(100);
    this->setAttackDamage(30);
    this->setName("BOOT");
    std::cout << "A new FragTrap is born!" << std::endl; 
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{ 
    std::cout << "A new FragTrap named " << other.getName();
    std::cout << " is being copied." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "FragTrap " << " is being assigned the values of ";
    std::cout << other.getName() << "." << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Goodbye, FragTrap! " << this->getName();
    std::cout << " is being destroyed." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap (name)
{
    this->setHitPoint(100);
    this->setEnergyPoint(100);
    this->setAttackDamage(30);
    this->setName(name);
    std::cout << "ClapTrap" << " (" << name << ") become FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " says: \"Hey guys, high five!\"" << std::endl;
}
