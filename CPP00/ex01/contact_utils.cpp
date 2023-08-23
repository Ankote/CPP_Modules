/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:35:00 by aankote           #+#    #+#             */
/*   Updated: 2023/08/23 09:44:23 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact (){}

Contact::Contact(std::string fsn, std::string lsn, std::string nkn,
            std::string pn, std::string dsecr)
{
    this->first_name = fsn;
    this->last_name = lsn;
    this->nickname = nkn;
    this->phone_num = pn;
    this->darkest_secret = dsecr;
}

void Contact::setlname(std::string value)
{
    last_name = value;
}

void Contact::setfname(std::string value)
{
    first_name = value;
}

void Contact::setnickname(std::string value)
{
    nickname = value;
}

void Contact::setphone(std::string  value)
{
    phone_num = value;
}

void Contact::setdsecret(std::string value)
{
    darkest_secret = value;
}

std::string Contact::getlname()
{
    return(last_name);	
}

std::string Contact::getfname()
{
    return(first_name);	
}

std::string Contact::getnickname()
{
    return(nickname);	
}

std::string Contact::getname()
{
    return(phone_num);	
}

std::string Contact::getscret()
{
    return(darkest_secret);	
}
