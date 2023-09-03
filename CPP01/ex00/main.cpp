/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:02:26 by aankote           #+#    #+#             */
/*   Updated: 2023/09/03 10:07:17 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    {
        Zombie* zb = newZombie("Foo");
        zb->announce(); 
        delete zb;
    }
    {
        Zombie* zb1 = newZombie("Night king ");
        zb1->announce();
        delete zb1;
    }
    {
        Zombie* zb2 = newZombie("Sppinz");
        zb2->announce();
        delete zb2;
    }
    randomChump("3uuuuuuuu");
    return (0);
}