/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:55:07 by aankote           #+#    #+#             */
/*   Updated: 2023/10/07 21:10:14 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

void validTest()
{
    int x = 0;
    try
    {   
        Array<int> a(5);
        Array<int> b(7);
        a[x] = 2; 
        std::cout << a[x];
    }   
    
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void invalidTest()
{
    try
    {   
        Array<int> a(5);
        Array<int> b(7);
        a[7] = 2; 
        std::cout << a[7];
    }   
    
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

//Deep copy
void testAssignement()
{
    try
    {   
        Array<int> a(7);
        Array<int> b(7);
        
        b = a;
        b[0] = 1;
        std::cout << a[0] << std::endl;
        std::cout << b[0] << std::endl;
    }   
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
int main()
{
    testAssignement();
    // validTest();
   
}


