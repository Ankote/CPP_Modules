/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:46:25 by aankote           #+#    #+#             */
/*   Updated: 2023/09/23 16:01:20 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("Cure")
{
    return ;
} 

Cure::Cure(Cure const &src) : AMateria(src)
{
    *this = src;
}

Cure::~Cure(void)
{
}

Cure &Cure::operator=(Cure const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

AMateria	*Cure::clone(void) const
{
    return (new Cure());
}

void            Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}