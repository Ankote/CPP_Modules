/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:30:09 by aankote           #+#    #+#             */
/*   Updated: 2023/10/12 14:21:38 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename Type> 

void swap(Type &arg1, Type &arg2)
{
    Type tmp = arg1;

    arg1 = arg2;
    arg2 = tmp;
};


template <typename Type> 
Type min(Type &arg1, Type &arg2)
{
    return (arg1 < arg2) ? arg1 : arg2;
};

template <typename Type> 
Type max(Type &arg1, Type &arg2)
{
        return (arg1 > arg2) ? arg1 : arg2;
};

