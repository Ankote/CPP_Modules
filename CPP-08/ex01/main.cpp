/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:17:28 by aankote           #+#    #+#             */
/*   Updated: 2023/10/19 18:10:34 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void test00()
{
    try
    {
        Span sp = Span(10000);
        for (int i = 0; i < 10000; i ++)
        {
            sp.addNumber(i);
        }
        std::cout << sp[4] << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

// int main()
// {
//     try {
//         std::vector<int>    l1;
//         std::vector<int>    l2;
//         for (int i = 0; i < 20 ; i ++)
//         {
//             l1.push_back(i);
//             l2.push_back(i * 2);
//         }
//         Span span( l1.size() + l2.size() );
//         span.addRange( l1.begin(), l1.end() );
//         span.addRange( l2.begin(), l2.end() );
//         for (size_t i = 0; i < l1.size() + l2.size() ;i++)
//         {
//             std::cout << span[i] << std::endl;
//         }
//         std::cout << "Longest span: " << span.longestSpan() << std::endl;
//         std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        
//     } catch ( std::exception& e ) {
//         std::cout << e.what() << std::endl; 
//     }
    
//     return 0;
// }

int main()
{
    std::string a = "123456789";
    
    size_t pos = a.find('l');
    if(pos == std::string::npos)
        std::cout << "Not Found" << std::string::npos << std::endl ;
    else
        std::cout << "Found " << pos<< std::endl;
}