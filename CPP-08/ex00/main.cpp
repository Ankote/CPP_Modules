/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:28:50 by aankote           #+#    #+#             */
/*   Updated: 2023/10/16 12:29:13 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <array>
#include <iostream>
#include "easyfind.hpp"
#include <vector>

void test00()
{
    std::cout << "\n\n_______________Test00___________________\n\n";
     try
    {
        std::vector<int> s;
        s.push_back(1);
        s.push_back(2);
        s.push_back(3);
        s.push_back(4);
        s.push_back(5);
        
        std::cout << "found target at index : "  << easyfind(s, 5) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test01()
{
    std::cout << "\n\n_______________Test01___________________\n\n";
     try
    {
        std::vector<int> s;
        s.push_back(1);
        
        std::cout << "found target at index : "  << easyfind(s, 5) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
int main()
{
    test00();
    test01();
}
