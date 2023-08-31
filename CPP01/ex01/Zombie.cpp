/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:25:27 by aankote           #+#    #+#             */
/*   Updated: 2023/08/31 15:13:50 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ()
{}

Zombie::Zombie(std::string name)
{
   this->name = name;
}

// std::string Zombie::getName( void )
// {
//    return (this->name);
// }

// void Zombie::setName(std::string name)
// {
//    this->name = name;
// }

void Zombie::announce (void)
{
   std::cout << this->name << " : Moar brainz" << std::endl;
}