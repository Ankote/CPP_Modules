/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:46:23 by aankote           #+#    #+#             */
/*   Updated: 2023/09/22 23:10:16 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure(void);
        
        Cure(Cure const &src);

        ~Cure(void);

        Cure             &operator=(Cure const &rhs);

        AMateria        *clone(void) const;
        
        void            use(ICharacter &target);
};