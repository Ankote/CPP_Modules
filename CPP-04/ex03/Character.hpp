/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:11:52 by aankote           #+#    #+#             */
/*   Updated: 2023/09/23 13:56:33 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
    protected : 

        std::string _Name;

        AMateria* inventory[4];

        int _count;

    public : 
        Character();

        Character(const Character &src);

        Character &operator = (const Character &src);

        ~Character();

        Character(std::string name);
        
        std::string const & getName() const;
        
        void equip (AMateria* m);

        void unequip(int index);

        void use (int idx, ICharacter & target);
};