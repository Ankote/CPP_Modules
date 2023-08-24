/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:43:48 by aankote           #+#    #+#             */
/*   Updated: 2023/08/24 12:20:51 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;
    
    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            argv[i][j] = std::toupper(argv[i][j]);
            j++;
        }
        std::cout << argv[i];
        
        i++;
    }
    return (0);
}
