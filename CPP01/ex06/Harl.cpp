/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:23:35 by aankote           #+#    #+#             */
/*   Updated: 2023/09/01 09:23:12 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl constructor called" << std::endl;
    return ;
}

void    Harl::debug(void)
{
    std::cout << "[ Debug ]" << std::endl;
    std::cout << "Let's track down that bug and squash it together!";
    std::cout << std::endl;
    std::cout << "Time to don our detective hats and debug this code.";
    std::cout << std::endl;
    return ;
}

void    Harl::warning(void)
{
    std::cout << "[ Warning ]" << std::endl;
    std::cout << "Warning: Immediate danger ahead!";
    std::cout << std::endl;
    std::cout << "Stay vigilant and take care.";
    return ;
}

void    Harl::error(void)
{
    std::cout << "[ Error ]" << std::endl;
    std::cout << "System malfunction.";
    std::cout << std::endl;
    std::cout << "Please seek technical support.";
    return ;
}

void    Harl::info(void)
{
    std::cout << "[ Info ]" << std::endl;
    std::cout << "Urgent Information: Immediate";
    std::cout << std::endl;
    std::cout << "action required. Please read for";
    std::cout << std::endl;
    std::cout << "critical updates and potential risks.";
    std::cout << std::endl;
    return ;
}   

void Harl::complain( std::string level )
{
    int i;

    i = 0;
    std::string table[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (table[i] != level && i < 4)
        i++;
    switch (i)
    {
        case 0: debug(); break;
        case 1: info(); break;
        case 2: warning(); break;  
        case 3: error(); break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]";
            std::cout << std::endl;
            break;
    }
}
