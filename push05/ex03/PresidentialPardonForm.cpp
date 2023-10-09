/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:46:40 by aankote           #+#    #+#             */
/*   Updated: 2023/10/09 20:26:15 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

typedef PresidentialPardonForm PpF;

PpF::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5)
{
    this->target = "President";
}

PpF::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj)
{
    
}

PresidentialPardonForm &PpF::operator=(const PresidentialPardonForm &obj)
{
    if (this == &obj)
        return (*this);
    *this = obj;
    return (*this);
}

PpF::~PresidentialPardonForm()
{
    
}

PpF::PresidentialPardonForm(std::string str): AForm("Presidential Pardon", 25, 5)
{
    this->target =  str;
}

void PpF::execute(Bureaucrat const &executor) const
{
    if (this->checkRequirements(executor) == false)
        throw PpF::GradeTooLowException();
    std::cout << "\033[0;34m" << this->target;
    std::cout << " has been pardoned by Zaphod Beeblebrox.\033[0m" <<std::endl;
}
