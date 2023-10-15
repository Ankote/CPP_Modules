/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:42:25 by aankote           #+#    #+#             */
/*   Updated: 2023/10/11 09:43:00 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}

Intern::~Intern()
{
    
}

Intern::Intern(const Intern &obj)
{
    *this = obj;
}

Intern &Intern::operator=(const Intern &obj)
{
    if (this == &obj)
        return (*this);
    return (*this);
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    int i;

    i = 0;
    
    AForm *table[3] = {new  ShrubberyCreationForm(target), new RobotomyRequestForm(target),new  PresidentialPardonForm(target)};
    while (i < 3 && formName != table[i]->getName() )
        i++;
    for (int j = 0 ; j < 3 ; j++)
    {
        if (i != j)
            delete table[j];
    }
    if (i > 2)
        throw AForm::GradeTooHighException("\033[0;31mSorry Can't Find this Form\033[0m");
    std::cerr << "\033[0;32mIntern creates *" << table[i]->getName() <<"*\033[0m" <<std::endl;
    return table[i];
}
