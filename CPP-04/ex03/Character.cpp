/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:11:46 by aankote           #+#    #+#             */
/*   Updated: 2023/09/24 00:29:44 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    this->_count = 0;
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] =  NULL;
    }
}

Character::Character(const Character &src)
{
    *this = src;
}

Character &Character::operator=(const Character &src)
{
    if (this == &src)
    {
        return (*this);
    }

    for (int i = 0; i < _count ; i++)
    {
        delete inventory[i];
        inventory[i] = NULL;
    }
    for (int i = 0; i < 4 ; i ++)
    {
        inventory[i] = src.inventory[i]->clone();
    }
    this->_Name = src._Name;
    this->_count = src._count;
    return (*this);
}


Character::~Character()
{
    for (int i = 0; i < this->_count; i++)
    {
       delete this->inventory[i];
    }
}

Character::Character(std::string name) : _Name(name)
{
    this->_count = 0;
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] =  NULL;
    }
}

/**********************************************/

std::string const &Character:: getName() const
{
    return (this->_Name);
}

//false one if i want to use m after this function i will have prob because i delete it

// void Character::equip (AMateria* m)
// {
//     // std::cout << m->getType();
//     if (this->_count < 4)
//     {
//         this->inventory[this->_count] = m;
//         this->_count ++;
//     }
//     else    
//         delete m;
// }

void Character::equip (AMateria* m)
{
    // std::cout << m->getType();
    if (this->_count < 4)
    {
        this->inventory[this->_count] = m->clone();
        this->_count ++;
    }
    delete (m);
}

void Character::unequip(int index)
{
    if (index >= 0 && index < 4)
        inventory[index] = 0;
    else
        std::cout << "Invalid Index";
}

void Character::use (int idx, ICharacter & target)
{
    // std::cout <<  this->inventory[idx]->getType() << "*" << std::endl;
    if (idx < this->_count)
    {
        this->inventory[idx]->use(target);
    }
}
