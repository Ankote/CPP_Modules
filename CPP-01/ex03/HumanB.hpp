/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:13:24 by aankote           #+#    #+#             */
/*   Updated: 2023/08/28 19:53:50 by aankote          ###   ########.fr       */
/*                                                                            */
/* *********************************************************************** *** */

#ifndef _HUMAN_B_HPP
# define _HUMAN_B_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    private : 
        std::string name;
        Weapon *weapon;
    
    public :
        HumanB(std::string name);

        void attack();

        void setWeapon(Weapon &weapon);

        Weapon *getWeapon();

        std::string getName();
};

# endif