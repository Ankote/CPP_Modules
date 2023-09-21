/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:57:37 by aankote           #+#    #+#             */
/*   Updated: 2023/09/16 15:03:09 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();

        FragTrap(const FragTrap &other);
        
        FragTrap &operator=(const FragTrap &other);

        ~FragTrap();

        FragTrap (std::string name);

        void highFivesGuys(void);
};
