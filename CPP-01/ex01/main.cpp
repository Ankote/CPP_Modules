/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:23:44 by aankote           #+#    #+#             */
/*   Updated: 2023/09/03 10:17:10 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* Zombies = zombieHorde(5, "White Walker");
    
    int i;
    
    i = 0;
    while (i < 5)
    {
        Zombies[i].announce();
        i++;
    }
    delete[] Zombies;
    return 0;
}
