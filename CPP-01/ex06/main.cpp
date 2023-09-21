/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:51:47 by aankote           #+#    #+#             */
/*   Updated: 2023/09/01 09:04:25 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (1);
    }
    Harl harl;
    
    harl.complain(argv[1]);
    return (0);
}