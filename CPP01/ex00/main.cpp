/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:02:26 by aankote           #+#    #+#             */
/*   Updated: 2023/08/26 09:02:27 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zb = newZombie("Foo");
    zb->announce();

    Zombie* zb1 = newZombie("Snoow");
    zb1->announce();

     Zombie* zb2 = newZombie("Sppinz");
    zb2->announce();
    delete zb;
    delete zb1;
    delete zb2;
    return (0);
}