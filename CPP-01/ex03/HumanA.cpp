/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:13:15 by aankote           #+#    #+#             */
/*   Updated: 2023/09/03 10:43:02 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << this->name;
    std::cout << " attacks with their ";
    std::cout << this->weapon.getType();
    std::cout << std::endl;
}
