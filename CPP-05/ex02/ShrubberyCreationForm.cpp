/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:46:54 by aankote           #+#    #+#             */
/*   Updated: 2023/10/09 20:26:29 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

typedef ShrubberyCreationForm ShF;

ShF::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137)
{
    this->target = "Appel";
}


ShF::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137)
{
    this->target = target;
}

ShF::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{
    *this = obj;
}

ShrubberyCreationForm &ShF::operator=(const ShrubberyCreationForm &obj)
{
    if (this == &obj)
        return (*this);
    this->target = obj.target;
    return (*this);
}

ShF::~ShrubberyCreationForm()
{
    
}

void ShF::execute(Bureaucrat const &executor) const
{
    if (this->checkRequirements(executor) == false)
        throw ShF::GradeTooLowException();
    std::string _shrubbery = "_shrubbery";
    std::ofstream outfileObj;
    
    outfileObj.open((target + _shrubbery).c_str());
    if (outfileObj.is_open())
    {
        outfileObj << "              v .   ._, |_  .,"          << std::endl;
        outfileObj << "           `-._\\/  .  \\ /    |/_"      << std::endl;
        outfileObj << "               \\\\  _\\, y | \\//"      << std::endl;
        outfileObj << "         _\\_.___\\\\, \\/ -.\\||"       << std::endl;
        outfileObj << "           `7-,--.`._||  / / ,"          << std::endl;
        outfileObj << "           /'     `-. `./ / |/_.'"       << std::endl;
        outfileObj << "                     |    |//"           << std::endl;
        outfileObj << "                     |_    /"            << std::endl;
        outfileObj << "                     |-   |"             << std::endl;
        outfileObj << "                     |   =|"             << std::endl;
        outfileObj << "                     |    |"             << std::endl;
        outfileObj << "--------------------/ ,  . \\--------._" << std::endl;
        std::cout << "\033[0;34m**Sherubbery Created you can check file (";
        std::cout << target + _shrubbery << ")**\033[0m" << std::endl;
    }
}

