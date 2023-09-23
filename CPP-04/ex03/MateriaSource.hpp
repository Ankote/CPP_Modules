/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:38:32 by aankote           #+#    #+#             */
/*   Updated: 2023/09/23 14:06:31 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    protected :
    
        std::string _type;

        AMateria* _Store[4];

        int _countStore;
    public:
    
        MateriaSource();
        
        MateriaSource(const MateriaSource &src);
        
        MateriaSource &operator=(const MateriaSource &src);
        
        ~MateriaSource();

        void learnMateria(AMateria*);
        
        AMateria* createMateria(std::string const & type);
};