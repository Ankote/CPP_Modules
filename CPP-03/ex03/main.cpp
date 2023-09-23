/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:08:26 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 18:46:09 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


void test1()
{
    std::cout << std::endl << "\e[0;33m <<<<<<<<<<<<<<Test  01>>>>>>>>>>>>>>>>>\e[0m" << std::endl;
    {
        DiamondTrap zizo("ZIZO");
        DiamondTrap hero("Hero");
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
        DiamondTrap zizo("ZIZO");
        DiamondTrap hero("Hero");
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
