/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:27:45 by aankote           #+#    #+#             */
/*   Updated: 2023/09/24 00:44:14 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

#include "MateriaSource.hpp"

#include "Character.hpp"

#include "Ice.hpp"

#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    AMateria* tmp2;

    tmp = src->createMateria("ice");
    tmp2 = tmp;
    me->equip(tmp2);
    
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
      
    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    me->equip(tmp);
      
    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    return 0;
}