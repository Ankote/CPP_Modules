/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:00:05 by aankote           #+#    #+#             */
/*   Updated: 2023/10/07 15:21:45 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



int main() 
{
    
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string stringArray[] = {"Ayoub", "Younnes", "Ayman", "reda", "Aimad"};
    bool booleanArray[] = {true, false, false, true, true};
    
    std::cout << "Iterating over intArray:" << std::endl;
    iter(intArray, 5, PrintElement<int>);
    std::cout << std::endl;
    
    std::cout << "Iterating over doubleArray:" << std::endl;
    iter(doubleArray, 5, PrintElement<double>);
    std::cout << std::endl;
    
    std::cout << "Iterating over String:" << std::endl;
    iter(stringArray, 5, PrintElement<std::string>);
    std::cout << std::endl;
    
    std::cout << "Iterating over Booleans:" << std::endl;
    iter(booleanArray, 5, PrintElement<bool>);
    std::cout << std::endl;

    return 0;
}