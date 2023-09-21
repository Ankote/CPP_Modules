/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:08:26 by aankote           #+#    #+#             */
/*   Updated: 2023/09/16 15:56:44 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//beRepaired
void test1()
{
    std::cout << std::endl << "\e[0;33m <<<<<<<<<<<<<<Test 01>>>>>>>>>>>>>>>>\e[0m" << std::endl;

    {
        ClapTrap C1("BleepBlitz");
        ClapTrap C2("WhirlyGizmo");

        C1.attack("WhirlyGizmo");
        C2.takeDamage(C2.getAttackDamage());
        C1.beRepaired(5);
    }
    std::cout << std::endl << "\e[91m <<<<<<<<<<<<<<end Test 01>>>>>>>>>>>>>>>>>\e[0m" << std::endl;
}

// Guard Gate
void test2()
{
    std::cout << std::endl << "\e[0;33m <<<<<<<<<<<<<<<<<Test  02>>>>>>>>>>>>>>>>>\e[0m" << std::endl;
    {
        ScavTrap S1 ("ScrapScout");
        ScavTrap S2 ("JunkProwler");

        S1.attack(S2.getName());
        S2.takeDamage(S2.getAttackDamage());
        S2.guardGate();
        S1.attack(S2.getName());
        S1.attack(S2.getName());
        S1.beRepaired(5);
    }
    std::cout << std::endl << "\e[91m<<<<<<<<<<<<<<<<<end Test  02>>>>>>>>>>>>>>>>\e[0m" << std::endl;
}

//S2 tries to attack but can't

void test3()
{
    std::cout << std::endl << "\e[0;33m <<<<<<<<<<<<<<Test  03>>>>>>>>>>>>>>>>>\e[0m" << std::endl;
    {
        ScavTrap S1 ("ScrapScout");
        ScavTrap S2 ("JunkProwler");
        ScavTrap S3;

        S3 = S2;

        S1.attack(S2.getName());
        S2.takeDamage(S2.getAttackDamage());
        S1.attack(S2.getName());
        S2.takeDamage(S2.getAttackDamage());
        S1.attack(S2.getName());
        S2.takeDamage(S2.getAttackDamage());

        S1.attack(S2.getName());
        S2.takeDamage(S2.getAttackDamage());
        S1.attack(S2.getName());
        S2.takeDamage(S2.getAttackDamage());
        S3.attack(S3.getName());
        S2.takeDamage(S2.getAttackDamage());
        S1.attack(S1.getName());
    }
    std::cout << std::endl << "\e[91m <<<<<<<<<<<<<<end Test  03>>>>>>>>>>>>>>>>\e[0m" << std::endl;
}

//attack using ClapTrap
void test4()
{
    std::cout << std::endl << "\e[0;33m <<<<<<<<<<<<<<<<<Test  04>>>>>>>>>>>>>>>>>\e[0m" << std::endl;
    {
        ScavTrap S1 ("ScrapScout");
        ScavTrap S2 ("JunkProwler");

        S1.ClapTrap::attack(S2.getName());
        S2.takeDamage(S2.ClapTrap::getAttackDamage());
    }
    std::cout << std::endl << "\e[91m<<<<<<<<<<<<<<<<<end Test  04>>>>>>>>>>>>>>>>\e[0m" << std::endl;
}


int main()
{
    // test1();
    // test2();
    // test3();
    test4();

    return 0;
}
