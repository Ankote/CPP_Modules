/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:02:09 by aankote           #+#    #+#             */
/*   Updated: 2023/10/19 10:19:26 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    try
    {
        if (argc == 2)
            parceFile(argv[1]);
        else
            std::cout << "Can't open file" << std::endl;
    }
    catch(const char *s)
    {
        std::cerr << s << '\n';
    }
}
