/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:05:30 by aankote           #+#    #+#             */
/*   Updated: 2023/10/10 17:56:05 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void ivalidTest()
{
    try
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("blablabla", "Bender");
        delete rrf;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void validTest()
{
    try
    {
        Bureaucrat b("bur", 1);
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
        b.signForm(*rrf);
        b.executeForm(*rrf);
        delete rrf;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;;
    }
}

void addTest()
{
    try
    {
        Bureaucrat b("Alami", 1);
        
        Intern someRandomIntern;
        AForm *rrf;
        rrf = someRandomIntern.makeForm("Presidential Pardon", "jack");
        std::cout << rrf->getName() << "." << std::endl;
        std::cout << rrf->getTarget() << std::endl;;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    // addTest();
    ivalidTest();
//    validTest();
}