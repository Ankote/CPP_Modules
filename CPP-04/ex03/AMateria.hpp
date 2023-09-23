/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:08:26 by aankote           #+#    #+#             */
/*   Updated: 2023/09/22 23:45:43 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria 
{
    protected:

        std::string _type;
        
    public:
    
        AMateria(void);

        AMateria(AMateria const &src);

        virtual ~AMateria(void);

        AMateria &operator=(AMateria const &rhs);

        AMateria(std::string const & type);

        std::string const & getType() const; //Returns the materia type

        virtual AMateria* clone() const = 0;
        
        virtual void use(ICharacter& target);
};
