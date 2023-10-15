/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:17:28 by aankote           #+#    #+#             */
/*   Updated: 2023/10/15 21:51:08 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    // try
    // {
    //     Span sp = Span(10000);
    //     for (int i = 0; i < 10000; i ++)
    //     {
    //         sp.addNumber(i);
    //     }
    //     std::cout << sp[4] << std::endl;
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
        
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    try {
        std::list<int>    l1;
        std::list<int>    l2;
        for (int i = 0; i < 20 ; i ++)
        {
            l1.push_back(i);
            l1.push_back(i * 2);
        }
        Span span( l1.size() + l2.size() );
        span.addRange( l1.begin(), l1.end() );
        span.addRange( l2.begin(), l2.end() );
        for (size_t i = 0; i < l1.size() + l2.size() - 2 ;i++)
        {
            std::cout << span[i] << std::endl;
        }
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        
    } catch ( std::exception& e ) {
        std::cout << e.what() << std::endl; 
    }
    
    return 0;
}