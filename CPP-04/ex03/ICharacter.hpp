/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:11:18 by aankote           #+#    #+#             */
/*   Updated: 2023/09/22 23:11:19 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
class AMateria ;

class ICharacter
{
    public:

        virtual ~ICharacter() {}

        virtual std::string const & getName() const = 0;

        virtual void equip(AMateria* m) = 0;

        virtual void unequip(int idx) = 0;
        
        virtual void use(int idx, ICharacter& target) = 0;
};