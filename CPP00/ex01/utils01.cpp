/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils01.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:40:28 by aankote           #+#    #+#             */
/*   Updated: 2023/08/21 21:58:56 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

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
