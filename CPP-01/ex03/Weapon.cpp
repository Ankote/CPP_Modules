/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:13:30 by aankote           #+#    #+#             */
/*   Updated: 2023/09/02 18:47:53 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
    this->type = type;
}
 
const std::string & Weapon::getType() const
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
