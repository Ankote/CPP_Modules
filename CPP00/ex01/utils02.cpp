/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils02.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:26:14 by aankote           #+#    #+#             */
/*   Updated: 2023/08/22 19:30:09 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    i = 0;
}

void PhoneBook::setContact(Contact c)
{
    if(i > 7)
        i = 0;
    contact[i++] = c;
}

Contact PhoneBook::getContact()
{
    return contact[i];
}
        