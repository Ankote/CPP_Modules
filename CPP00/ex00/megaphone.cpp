/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:43:48 by aankote           #+#    #+#             */
/*   Updated: 2023/08/18 19:46:40 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;
    
    i = 1;
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
