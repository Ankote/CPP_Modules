/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:35:13 by aankote           #+#    #+#             */
/*   Updated: 2023/10/06 13:37:36 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
class Data
{
    public :
        void print()
        {
            std::cout << "Hiii I am A Data" << std::endl;
        }
        Data();
        
        Data(const Data &);

        Data &operator = (const Data &);

        ~Data();
};

