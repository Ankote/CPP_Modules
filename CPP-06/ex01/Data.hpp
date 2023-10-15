/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:35:13 by aankote           #+#    #+#             */
/*   Updated: 2023/10/11 15:47:47 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
class Data
{
    public :
        void print();
        Data();
        
        Data(const Data &);

        Data &operator = (const Data &);

        ~Data();
};

