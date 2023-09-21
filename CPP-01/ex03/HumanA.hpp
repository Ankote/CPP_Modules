/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:13:18 by aankote           #+#    #+#             */
/*   Updated: 2023/09/16 12:24:42 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_A_HPP
# define _HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
    private : 
        std::string name;
        Weapon & weapon;
    public :
        HumanA(std::string, Weapon &weapon);
        void attack();
};

# endif