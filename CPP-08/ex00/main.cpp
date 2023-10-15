/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:28:50 by aankote           #+#    #+#             */
/*   Updated: 2023/10/13 18:45:00 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <array>
#include <iostream>
#include "easyfind.hpp"
#include <vector>


int main() {
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
    return 0;
}
