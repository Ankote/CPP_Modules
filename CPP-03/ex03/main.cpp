/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:08:26 by aankote           #+#    #+#             */
/*   Updated: 2023/10/23 15:46:02 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


void test1()
{
    std::cout << std::endl << "\e[0;33m <<<<<<<<<<<<<<Test  01>>>>>>>>>>>>>>>>>\e[0m" << std::endl;
    {
        DiamondTrap zizo;
        DiamondTrap hero;
        zizo.attack(hero.getName());
        zizo.highFivesGuys();
        
        std::cout << "\n________________________Diamond Infos______________________\n\n";
        zizo.whoAmI();
        std::cout << std::endl;
        hero.whoAmI();
         std::cout << "__________________________________________________________\n\n";

    }
    std::cout << std::endl << "\e[91m <<<<<<<<<<<<<<end Test  01>>>>>>>>>>>>>>>>\e[0m" << std::endl;
}

//Attack with CLapTrap
void test2()
{
    std::cout << std::endl << "\e[0;33m <<<<<<<<<<<<<<Test  01>>>>>>>>>>>>>>>>>\e[0m" << std::endl;
    {
        DiamondTrap zizo;
        DiamondTrap hero;
        zizo.ClapTrap::attack(hero.getName());
        zizo.highFivesGuys();
        
        std::cout << "\n________________________Diamond Infos______________________\n\n";
        zizo.whoAmI();
        std::cout << std::endl;
        hero.whoAmI();
         std::cout << "__________________________________________________________\n\n";

    }
    std::cout << std::endl << "\e[91m <<<<<<<<<<<<<<end Test  01>>>>>>>>>>>>>>>>\e[0m" << std::endl;
}

int main()
{
    test2();
    return 0;
}
