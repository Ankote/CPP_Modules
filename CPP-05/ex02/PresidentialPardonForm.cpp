/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:46:40 by aankote           #+#    #+#             */
/*   Updated: 2023/10/10 16:34:02 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

typedef PresidentialPardonForm PpF;

PpF::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = "President";
}

PpF::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = target;
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

void PpF::execute(Bureaucrat const &executor) const
{
    if (this->checkRequirements(executor) == false)
        throw PpF::GradeTooLowException();
    std::cout << "\033[0;34m" << this->target;
    std::cout << " has been pardoned by Zaphod Beeblebrox.\033[0m" <<std::endl;
}
