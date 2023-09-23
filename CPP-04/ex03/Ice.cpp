/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:46:19 by aankote           #+#    #+#             */
/*   Updated: 2023/09/24 00:30:25 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    return ;
} 

Ice::Ice(Ice const &src) : AMateria(src)
{
    *this = src;
}

Ice::~Ice(void)
{
}

Ice &Ice::operator=(Ice const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

AMateria        *Ice::clone(void) const
{
    return (new Ice());
}

void            Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}