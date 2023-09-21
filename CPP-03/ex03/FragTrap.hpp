/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:57:37 by aankote           #+#    #+#             */
/*   Updated: 2023/09/16 16:00:55 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
        FragTrap();

        FragTrap(const FragTrap &other);
        
        FragTrap &operator=(const FragTrap &other);

        ~FragTrap();

        FragTrap (std::string name);
        
        void  attack(const std::string& target);

        void highFivesGuys(void);
};