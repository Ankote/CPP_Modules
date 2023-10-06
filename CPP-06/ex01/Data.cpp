/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:37:08 by aankote           #+#    #+#             */
/*   Updated: 2023/10/06 11:51:28 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
    
}

Data::Data(const Data &src)
{

    *this = src;
}

Data &Data::operator = (const Data &rhs)
{
    if (this != &rhs)
        return (*this);
    return (*this);
}

Data::~Data()
{
    
}
