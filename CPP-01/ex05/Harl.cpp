/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 21:50:52 by aankote           #+#    #+#             */
/*   Updated: 2023/08/31 22:38:52 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl::Harl(){}

void    Harl::debug( void )
{
    std::cout << "[DEBUG] : ";
    std::cout << " I love having extra Rfisa ";
    std::cout << "for my 7XL-double-cheese-triple-pickle-special";
    std::cout << " ketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[INFO] : ";
    std::cout << " I love to cook Rfisa with a smile :)" << std::endl;
}

void    Harl::warning( void )
{  
    std::cout << "[WARNING] : ";
    std::cout << " I think I ate too much Rfisa lately." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "[ERROR] : ";
    std::cout << " This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

void   Harl::complain( std::string level )
{
    int i;

    i = -1;
    void(Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info,
        &Harl::warning, &Harl::error};
    std::string table[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (++i < 4 && table[i] != level);
    if (i < 4)
        (this->*ptr[i])();
}