/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:21:30 by aankote           #+#    #+#             */
/*   Updated: 2023/08/31 20:43:04 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "class.hpp"

typedef Generate_file GF;

GF::Generate_file(std::string infile, std::string s1, std::string s2)
{
    std::string exten;
    
    exten = ".replace";
    this->origine = s1;
    this->coppy = s2;
    this->infileObj.open(infile.c_str());
    if (this->infileObj.is_open())
        this->outfileObj.open((infile + exten).c_str());
}


bool GF::checkFile()
{
    if (!this->infileObj.is_open())
    {
        std::cout << "can't open infile" << std::endl;
        return (0);
    }
    if (!this->outfileObj.is_open())
    {
        std::cout << "can't open replaced file" << std::endl;
        return (0);
    }
    return (1);
}

bool GF::replace_file()
{
    std::string replacedFile;
    size_t pos;
    std::string line;
    
    if (!checkFile())
        return (0);
    while (getline(infileObj, line))
    {
        pos = line.find(this->origine);
        while (pos != std::string::npos && pos < line.length())
        {
            line.erase(pos, this->origine.length());
            replacedFile.append(line.insert(pos, this->coppy));
            replacedFile.append("\n");
            pos = line.find(this->origine, pos + this->origine.length());
        }
        replacedFile.append(line);
        replacedFile.append("\n");
    }
    outfileObj << replacedFile;
    return (1);
}
