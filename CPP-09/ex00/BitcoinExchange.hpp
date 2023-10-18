/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:02:17 by aankote           #+#    #+#             */
/*   Updated: 2023/10/18 22:43:30 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string.h>

class BitcoinExchange 
{
    private :
        std::map<std::string , double> _data;
        std::ifstream infileObj;
    public :
        BitcoinExchange ();
        
        BitcoinExchange(const BitcoinExchange&o);
        
        BitcoinExchange &operator=(const BitcoinExchange&o);
        
        ~BitcoinExchange();

        int parceFile(char *fileName);
};