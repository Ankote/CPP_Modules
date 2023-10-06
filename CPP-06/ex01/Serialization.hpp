/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:29:33 by aankote           #+#    #+#             */
/*   Updated: 2023/10/06 11:49:38 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Data.hpp"

class Serializer
{
    private :

        Serializer();
        
        Serializer(const Serializer &);

        Serializer &operator=(const Serializer &);

        ~Serializer();

    public :
        static uintptr_t serialize(Data* ptr);

        static Data* deserialize(uintptr_t raw);
};