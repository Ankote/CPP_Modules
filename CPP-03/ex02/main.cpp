/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:08:26 by aankote           #+#    #+#             */
/*   Updated: 2023/09/16 15:59:08 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//highFIvesGuys called
void test1()
{
    std::cout << std::endl << "\e[0;33m <<<<<<<<<<<<<<Test  01>>>>>>>>>>>>>>>>>\e[0m" << std::endl;
    {
        FragTrap zizo;
        zizo.setName("zizo");
        FragTrap hero("Hero");
        
        zizo.attack(hero.getName());
        hero.takeDamage(zizo.getAttackDamage());
        hero.beRepaired(60);
        zizo.highFivesGuys();
    }
    std::cout << std::endl << "\e[91m <<<<<<<<<<<<<<end Test  01>>>>>>>>>>>>>>>>\e[0m" << std::endl;
}

//more tests
void test2()
{
    std::cout << std::endl << "\e[0;33m <<<<<<<<<<<<<<Test  02>>>>>>>>>>>>>>>>>\e[0m" << std::endl;
    {
        FragTrap zizo;
        zizo.setName("zizo");
        FragTrap hero("Hero");
        
        zizo.attack(hero.getName());
        hero.takeDamage(zizo.getAttackDamage());
        zizo.attack(hero.getName());
        hero.takeDamage(zizo.getAttackDamage());
        zizo.attack(hero.getName());
        hero.takeDamage(zizo.getAttackDamage());
        zizo.attack(hero.getName());
        hero.takeDamage(zizo.getAttackDamage());
        hero.attack(zizo.getName());
        zizo.takeDamage(zizo.getAttackDamage());
        zizo.highFivesGuys();
    }
    std::cout << std::endl << "\e[91m <<<<<<<<<<<<<<end Test  02>>>>>>>>>>>>>>>>\e[0m" << std::endl;
}


int main()
{
    test1();
    test2();
    return 0;
}
