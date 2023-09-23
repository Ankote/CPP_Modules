/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:40:26 by aankote           #+#    #+#             */
/*   Updated: 2023/09/24 00:34:16 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(AMateria const &src)
{
    *this = src;
}

AMateria::~AMateria(void)
{
}

AMateria &AMateria::operator=(AMateria const &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

std::string const & AMateria::getType(void) const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "Default AMateira message use()" << target.getName();
}


