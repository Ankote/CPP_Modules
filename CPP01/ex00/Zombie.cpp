/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:02:32 by aankote           #+#    #+#             */
/*   Updated: 2023/08/26 09:19:14 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Zombie.hpp"


Zombie::Zombie()
{
   
}

Zombie::Zombie(std::string name)
{
   this->name = name;
}

void Zombie::announce()
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " : delited" << std::endl;
}

