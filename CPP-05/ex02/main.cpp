/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:05:30 by aankote           #+#    #+#             */
/*   Updated: 2023/10/11 09:24:06 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void ValidTestShrubbery()
{
    try
    {
        Bureaucrat b("Any", 1);
        ShrubberyCreationForm sh;
        b.signForm(sh);
        b.executeForm(sh);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void InvalidTestShrubbery()
{
    try
    {
    
        Bureaucrat b("Any", 1);
        ShrubberyCreationForm sh;
        b.executeForm(sh);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void ValidTestRobotomy()
{
     try
    {
    
        Bureaucrat b("Any", 1);
        RobotomyRequestForm RrF;
        b.signForm(RrF);
        std::cout << "\n___________________________________________\n";
        b.executeForm(RrF);
        std::cout << "\n___________________________________________\n";
        b.executeForm(RrF);
        std::cout << "\n___________________________________________\n";
        b.executeForm(RrF);
        std::cout << "\n___________________________________________\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void InvalidTestRobotomy()
{
     try
    {
        Bureaucrat b("Any", 1);
        RobotomyRequestForm RrF;
        b.executeForm(RrF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void ValidTestPresedential()
{
     try
    {
    
        Bureaucrat b("Any", 2);
        PresidentialPardonForm PpF;
        b.signForm(PpF);
        b.executeForm(PpF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void InvalidTestPresedential()
{
    try
    {
        Bureaucrat b("Any", 1);
        PresidentialPardonForm PpF;
        b.executeForm(PpF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}



int main()
{
    // ValidTestShrubbery();
    // InvalidTestShrubbery();
    // ValidTestRobotomy();
    // InvalidTestRobotomy();
    // ValidTestPresedential();
    // InvalidTestPresedential();
    try
    {
        Bureaucrat b("youness", 1);
        RobotomyRequestForm f(b.getName());
        b.signForm(f);
        for (int i =0; i < 10 ; i ++)
        {
            b.executeForm(f);
            std::cout << "\n\n_______________________________________\n\n";
        }
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

