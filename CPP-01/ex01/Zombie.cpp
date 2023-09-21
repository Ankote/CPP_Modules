/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:25:27 by aankote           #+#    #+#             */
/*   Updated: 2023/09/03 10:11:23 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ()
{}

Zombie::Zombie(std::string name)
{
   this->name = name;
}

void Zombie::announce (void)
{
   std::cout << this->name << " : Moar brainz" << std::endl;
}

Zombie::~Zombie ()
{
   
}
