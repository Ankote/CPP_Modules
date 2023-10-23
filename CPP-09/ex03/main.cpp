/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:01:48 by aankote           #+#    #+#             */
/*   Updated: 2023/10/23 20:54:55 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool checkArgs(int ac, char **argv, std::vector<int> &arr)
{
    if (ac != 2)
    {
        std::cout << "ERROR! : Invalid args!!" << std::endl;
        return(0);
    }
    std::string data = argv[1];
    std::istringstream iss(data);
    std::string line;
    char *end;
    while (iss >> line)
    {
        double value = strtod(line.c_str(), &end);
        if (*end)
            return(std::cout << "ERROR!: input !!" << std::endl,0);
        else
            arr.push_back(value);
    }
    return (true);
}

int main(int ac, char **argv)
{
    std::vector<int> arr;
    if (checkArgs(ac, argv, arr))
    {
        PmergeMe m;
        m.printNumbers(arr);
        
    }
}

//if not valid end will be first element non valid

//run time polimorphism
//virtual member function ~virtual distructor

// Vtable Vpointer