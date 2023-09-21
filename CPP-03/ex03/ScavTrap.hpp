/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:13:43 by aankote           #+#    #+#             */
/*   Updated: 2023/09/16 16:00:58 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public  ClapTrap
{ 
      public :
         ScavTrap();

         ScavTrap (const ScavTrap &other);

         ScavTrap &operator=(const ScavTrap &other);

         ~ScavTrap();
          
         ScavTrap (std::string name);
         
         void attack(const std::string& target);

         void guardGate();
        
};
