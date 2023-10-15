/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:00:01 by aankote           #+#    #+#             */
/*   Updated: 2023/10/12 15:57:47 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stddef.h>
#include <iostream>

template <typename Type1, typename Func, typename Type2>
void iter(Type1 *arr, size_t length, Func (*func)(Type2 &t))
{
    for (size_t i = 0; i < length; i++)
    {
        func(arr[i]);
    }
}

template <typename T>
T PrintElement( T& element) {  
    std::cout << element << std::endl;
    return (element);
}
