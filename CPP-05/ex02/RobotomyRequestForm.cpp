/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:46:49 by aankote           #+#    #+#             */
/*   Updated: 2023/10/04 18:20:58 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

typedef RobotomyRequestForm RbF;

RbF::RobotomyRequestForm() : AForm("Shrubbery", 72, 45)
{
    this->target = "Boot";
}

RbF::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
{
    
}

RobotomyRequestForm &RbF::operator=(const RobotomyRequestForm &obj)
{
    if (this == &obj)
        return (*this);
    *this = obj;
    return (*this);
}

RbF::~RobotomyRequestForm()
{
    
}


void RbF::execute(Bureaucrat const &executor) const
{
    static bool check = false;
    
    if (this->checkRequirements(executor) == false)
        throw RbF::GradeTooLowException();
    if(check == true)
    {
        std::cout << "\033[0;32m" << this->target;
        std::cout  <<  " has been robotomizedsuccessfully 50% of the time\033[0m" << std::endl;
        check = false;
    }
    else
    {
        std::cout << "\033[0;31mthe robotomy failed.\033[0m" << std::endl;
        check = true;
    }
}
