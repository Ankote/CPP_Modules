/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:08:26 by aankote           #+#    #+#             */
/*   Updated: 2023/09/15 17:15:41 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void test1()
{
     std::cout << std::endl << "\e[0;33m <<<<<<<<<<<<<<<<<Test  02>>>>>>>>>>>>>>>>>\e[0m" << std::endl;
    {
        ClapTrap claptrap1("CL4P-TP");
        ClapTrap claptrap2("FR4G-TP");

        claptrap1.attack("Bandit");
        claptrap1.takeDamage(5);
        claptrap1.beRepaired(3);

        claptrap2.attack("Psycho");
        claptrap2.takeDamage(12);
    }
    std::cout << std::endl << "\e[91m<<<<<<<<<<<<<<<<<end Test  02>>>>>>>>>>>>>>>>\e[0m" << std::endl;

}

void test2()
{
    std::cout << std::endl << "\e[0;33m <<<<<<<<<<<<<<<<<Test  02>>>>>>>>>>>>>>>>>\e[0m" << std::endl;
    {
        ClapTrap claptrap1("CL4P-TP");
        ClapTrap claptrap2("FR4G-TP");
        for (int i = 0; i < 11 ; i++)
        {
            claptrap1.attack("Bandit");
            claptrap2.takeDamage(0);
        }
    }
    std::cout << std::endl << "\e[91m<<<<<<<<<<<<<<<<<end Test  02>>>>>>>>>>>>>>>>\e[0m" << std::endl;
}

int main()
{
    test1();
    test2();
    return 0;
}
