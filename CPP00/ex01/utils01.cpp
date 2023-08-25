/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils01.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:40:28 by aankote           #+#    #+#             */
/*   Updated: 2023/08/25 21:19:55 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void instractions()
{
    std::cout << "\tInvalid commande!! you've to chose : \n";
    std::cout << "\t  ADD    : add a new contact.\n";
    std::cout << "\t  SEARCH : search for a contact with its index\n";
    std::cout << "\t  EXIT   : Exit the programme\n";
}

int isnumber(std::string index)
{
    int i;
    
    i = 0;
    while (index[i])
    {
        if (!isdigit(index[i]))
            return (-1);
        i ++;
    }
    if (atoi(index.c_str()) < 0 || atoi(index.c_str()) > std::numeric_limits<int>::max())
        return (-1);
    return (atoi(index.c_str()));
}
	
void display(int index, Contact c)
{
    std::cout << std::setw(10) << std::right << index;
    std::cout << "|";
    std::cout << std::setw(10) << std::right << replace_str(c.getfname()) ;
    std::cout << "|";
    std::cout << std::setw(10) << std::right << replace_str(c.getlname());
    std::cout << "|";
    std::cout << std::setw(10) << std::right << replace_str(c.getnickname());
    std::cout << std::endl;
}

void contactInfos(Contact c)
{
    std::cout << "__________________________________";
    std::cout << std::endl << std::endl;
    std::cout << "    First Name   : " << c.getfname() << std::endl; 
    std::cout << "    Last Name    : " << c.getlname() << std::endl;;
    std::cout << "    Nickname     : " << c.getnickname() << std::endl;
    std::cout << "    Phone Number : " << c.getphone() << std::endl;
    std::cout << "    Dark secret  : " << c.getscret() << std::endl;
    std::cout << "___________________________________";
    std::cout << std::endl << std::endl;
}

