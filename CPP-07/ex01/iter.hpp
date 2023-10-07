/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:00:01 by aankote           #+#    #+#             */
/*   Updated: 2023/10/07 15:20:16 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stddef.h>
#include <iostream>
template <typename Type, typename Func>

void iter(Type *arr, size_t length, Func func)
{
    for (size_t i = 0; i < length; i++)
    {
        func(arr[i]);
    }
};

template <typename T>
void PrintElement(const T& element) {
    std::cout << element << std::endl;
};