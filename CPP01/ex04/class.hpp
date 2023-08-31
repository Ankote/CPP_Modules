/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:07:07 by aankote           #+#    #+#             */
/*   Updated: 2023/08/31 20:40:43 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLASS_HPP_
# define _CLASS_HPP_
#include <iostream>
#include <fstream>
#include <string>

class Generate_file
{
    private :
        std::ifstream infileObj;
        std::ofstream outfileObj;
        std::string infile;
        std::string origine;
        std::string coppy;
        std::string line;
    
    public :
        Generate_file(std::string infile, std::string s1, std::string s2);

        bool checkFile();

        bool replace_file();
};

# endif