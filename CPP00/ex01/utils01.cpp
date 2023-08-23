/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils01.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:40:28 by aankote           #+#    #+#             */
/*   Updated: 2023/08/22 21:19:02 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_contact(std::string fn, std::string ln,
                std::string nick, std::string  pn, std::string ds)
{
    setContact(Contact(fn, ln, nick, pn, ds));
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

void PhoneBook::serch()
{
    int j;
    std::string index;
    
    j = 0;
    while (j < i)
    {
        display(j, contact[j]);
        j ++;
    }
    while (1)
    {
        std::cout << "which index : ";
        getline(std::cin, index);std::string str;

        if (isnumber(index) < 0 || atoi(index.c_str()) >= i)
            std::cout << "invalid index!! Try again\n";
        else 
            break;
    }
    display(isnumber(index), contact[isnumber(index)]);
}

