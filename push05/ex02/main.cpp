/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:05:30 by aankote           #+#    #+#             */
/*   Updated: 2023/10/09 21:36:58 by aankote          ###   ########.fr       */
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
    
        Bureaucrat b("Any", 12);
        ShrubberyCreationForm sh;
        sh.beSigned(b);
        sh.execute(b);
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
    
        Bureaucrat b("Any", 146);
        ShrubberyCreationForm sh;
        sh.beSigned(b);
        sh.execute(b);
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
    
        Bureaucrat b("Any", 12);
        RobotomyRequestForm RrF;
        RrF.beSigned(b);
        RrF.execute(b);
        RrF.execute(b);
        RrF.execute(b);
        RrF.execute(b);
        RrF.execute(b);
        RrF.execute(b);
        RrF.execute(b);
        RrF.execute(b);
        RrF.execute(b);
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
        Bureaucrat b("Any", 12);
        RobotomyRequestForm RrF;
        RrF.execute(b);
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
        PpF.beSigned(b);
        PpF.execute(b);
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
        Bureaucrat b("Any", 10);
        PresidentialPardonForm PpF;
        PpF.beSigned(b);
        PpF.execute(b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


void ValidtestExecute()
{
    try
    {
        Bureaucrat b("Any", 4);
        PresidentialPardonForm PpF;
        PpF.beSigned(b);
        b.executeForm(PpF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


void InvalidtestExecute()
{
    try
    {
        Bureaucrat b("Any", 6);
        PresidentialPardonForm PpF;
        PpF.beSigned(b);
        b.executeForm(PpF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    InvalidTestShrubbery();
    InvalidTestRobotomy();
    InvalidTestPresedential();
    ValidTestShrubbery();
    ValidTestRobotomy();
    ValidTestPresedential();
    InvalidtestExecute();
}

