/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:36:34 by aankote           #+#    #+#             */
/*   Updated: 2023/08/25 21:32:01 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    k = 0;
    i = 0;
}

void PhoneBook::setContact(Contact c)
{
    if(k > 7)
        k = 0;
    if (i <= 7)
        i ++;
    contact[k++] = c;
}

Contact PhoneBook::getContact()
{
    return contact[i];
}

void PhoneBook::add_contact(std::string fn, std::string ln,
                std::string nick, std::string  pn, std::string ds)
{
    setContact(Contact(fn, ln, nick, pn, ds));
}


void PhoneBook::serch()
{
    int j;
    std::string index;
    
    j = -1;
    if (i <= 0)
    {
        std::cout << "Empty list!" << std::endl;
        return ;
    }
    while (++j < i)
        display(j, contact[j]);
    while (1)
    {
        std::cout << "which index : ";
        getline(std::cin, index);
        if(index == "cancel")
            return ;
        if (isnumber(index) < 0 || atoi(index.c_str()) >= i)
            std::cout << "invalid index!! Try again\n";
        else 
            break;
    }
    contactInfos(contact[isnumber(index)]);
}
