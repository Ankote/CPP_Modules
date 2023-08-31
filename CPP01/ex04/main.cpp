/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:06:44 by aankote           #+#    #+#             */
/*   Updated: 2023/08/31 20:42:42 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"
// #include <fstream>

typedef Generate_file Gf;

int main(int argc, char **argv)
{   
    std::string fileNme = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if(argc < 4 || !argv)
       return (std::cout << "please enter args!!\n", 0);    
    
    Gf main(fileNme, s1, s2);
    if (main.replace_file())
        std::cout << "you can open " << argv[1] << ".replalce";
    else
        std::cout << "ERROR 404";
    return 0;
}
