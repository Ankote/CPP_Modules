/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:46:15 by aankote           #+#    #+#             */
/*   Updated: 2023/09/22 23:45:51 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice(void);
        Ice(Ice const &src);
        ~Ice(void);

        Ice             &operator=(Ice const &rhs);
        AMateria        *clone(void) const;
        void            use(ICharacter &target);
};