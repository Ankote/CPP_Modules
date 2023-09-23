/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:44:40 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 18:40:27 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap : public FragTrap , public  ScavTrap
{
    private :
        std::string _Name;
        
    public :
        DiamondTrap();
        
        DiamondTrap(const DiamondTrap &other);

        DiamondTrap &operator=(const DiamondTrap &other);
        
        void attack(const std::string& target);
        
        ~DiamondTrap();

        DiamondTrap(std::string name);

        const std::string &getName() const;

        void whoAmI();

        void aff();
};