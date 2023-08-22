/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils01.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:40:28 by aankote           #+#    #+#             */
/*   Updated: 2023/08/22 11:32:44 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_contact(std::string fn, std::string ln,
                std::string nick, std::string  pn, std::string ds)
{
    setContact(Contact(fn, ln, nick, pn, ds));
}


void PhoneBook::serch()
{
    int index;
    int j;
    
    j = 0;
    while (j < i)
    {
        display(j, contact[j]);
        j ++;
    }
    while (index >= i || index < 0)
    {
        std::cout << "which index : ";
        std::cin >> index;
        std::cin.ignore();
        if (index >= i || index < 0)
            std::cout << "invalid index!! Try again\n";
    }
    display(index, contact[index]);
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
