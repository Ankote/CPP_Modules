/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:43:48 by aankote           #+#    #+#             */
/*   Updated: 2023/08/25 14:35:16 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void strupper(std::string str)
{
    int i;
    i = 0;
    while (str[i])
    {
        str[i] = std::toupper(str[i]);
        std::cout << str[i];
        i++;
    }
}

int main(int argc, char **argv)
{
    int i; 
    
    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    while (i < argc)
    {
        strupper(argv[i]);
        i++;
    }
    return (0);
}
