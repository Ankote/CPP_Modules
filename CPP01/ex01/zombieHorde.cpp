/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:25:32 by aankote           #+#    #+#             */
/*   Updated: 2023/09/02 14:01:54 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;

    i = 0;
    Zombie* Zombies = new Zombie[N];
    
    while (i < N)
    {
        Zombies[i] = Zombie(name);
        i++;
    }
    return (Zombies);
}
