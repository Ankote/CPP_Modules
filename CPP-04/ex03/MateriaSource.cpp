/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:43:22 by aankote           #+#    #+#             */
/*   Updated: 2023/09/24 00:31:14 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/************************Canonical Form*****************************/

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4 ; i ++)
    {
        this->_Store[i] = 0;
    }
    this->_countStore = 0;
}
        
MateriaSource::MateriaSource(const MateriaSource &src)
{
   *this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
    this->_type = src._type;
    this->_countStore = src._countStore;
    
    for (int i = 0; i < this->_countStore; i ++)
    {
        delete this->_Store[i];
       this->_Store[i] = src._Store[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->_countStore ; i ++)
    {
        delete this->_Store[i];
    }
}


/***************************************************************/

// here i use clone for copie  matiria ; in same time to save previus matira 
//because i can modifies prev matiria in main or in other place so the copu will be modified.

void MateriaSource::learnMateria(AMateria* matiria)
{
    if (this->_countStore < 4)
    {
        this->_Store[_countStore] = matiria->clone();
        _countStore ++;
    }
    delete matiria;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type == "ice")
        return (new Ice());
    else if (type == "cure")
            return (new Cure());
    return (0);
}
