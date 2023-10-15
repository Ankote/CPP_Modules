/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:35:29 by aankote           #+#    #+#             */
/*   Updated: 2023/10/15 16:05:49 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include  <iostream>
#include <stddef.h>

template <typename T>

class Array
{
    private :
        unsigned int arraySize;
        T *arr;
    
    public :
        
        Array() : arraySize(0)
        {
            arr = new T[0];
        }
        Array(unsigned int n)
        { 
            arr = new T[n];
            arraySize = n;
            for (unsigned int i = 0; i < n; i++)
            {
                arr[i] = T();
            }
        }
        
        Array &operator=(const Array &other)
        {
            if (this == &other)
                return *this;
            if (arr)
                delete[] arr;
            this->arr = new T[other.arraySize];
            this->arraySize = other.arraySize;
            for (unsigned int  i = 0; i <this->arraySize ; i ++)
            {
                this->arr[i] = other.arr[i];
            }
            return (*this);
        }

        Array(const Array &other)
        {
            arr = NULL;
            *this = other;
        }
        
        ~Array() 
        {
           delete[] arr;
        }
        
        T &operator[](const int &index) const
        {
            if (index < (int)arraySize && index >= 0) 
            {
                return arr[index];
            } 
            else
            {
                throw std::out_of_range("Index out of bounds");
            }
        }

        size_t size() const
        {
            return (this->arraySize);
        } 
};
