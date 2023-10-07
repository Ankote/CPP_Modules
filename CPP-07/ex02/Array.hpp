/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:35:29 by aankote           #+#    #+#             */
/*   Updated: 2023/10/07 21:11:15 by aankote          ###   ########.fr       */
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
        
        Array() : arraySize(1)
        {
            arr = new T[0];
            arr[0] = T();
        }
               
        Array(unsigned int n)
        { 
            arr = (new T[n]);
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
            this->arraySize = other.arraySize;
    
            if (arr)
                delete[] arr;
            this->arr = new T[other.arraySize];
            for (size_t i = 0; i < arraySize ; i ++)
            {
               this[i] = other[i];
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
        
        T &operator[](const unsigned int &index) const
        {
            if (index < arraySize) 
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

// In the first line, int *a = new int();
// , new allocates memory for an integer and initializes 
// it to the default value (zero for integers). 
// It's not equivalent to calloc because calloc 
// initializes the allocated memory to zero for
//  all bytes, while new int() initializes only 
//  the int to zero.
 


// In the first line, int *a = new int(5);
// initializ ewith 5
//  the int to zero.

// In the second line, int *a = new int;,
//  new allocates memory for an integer, 
//  but it does not initialize it. It's
//   not equivalent to malloc because malloc 
//   allocates uninitialized memory, while new int
//    allocates }memory for an integer and invokes the constructor (if any) for the int type.

