/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:36:50 by aankote           #+#    #+#             */
/*   Updated: 2023/10/04 18:18:28 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/****************************Canunical AForm******************/

AForm::AForm() : _Name("Unknowen"), _Signed(false), _signGrade(1), _execGrad(1)
{
    
}

AForm::AForm(const AForm &o) :_signGrade(o._signGrade), _execGrad(o._execGrad)
{
    _Name = o._Name;
    this->_Signed = o._Signed;
    if (this->_execGrad > 150 || this->_signGrade > 150)
        throw AForm::GradeTooLowException();
    if (this->_execGrad < 0 || this->_signGrade < 0)
        throw AForm::GradeTooLowException();
    // std::cout << "AForm Copy Constructor Called" << std::endl;
}

AForm &AForm::operator= (const AForm &o)
{
    if (this == &o)
        return (*this);
    _Name = o._Name;
    // std::cout << "AForm Copy Constructor Called" << std::endl;
    return (*this);
}

AForm::~AForm()
{
    // std::cout << "AForm Destructor Called" << std::endl;
}
/***************************************************/

AForm::AForm (std::string name, const int &signRecGrade, const int &execReqGrade) :
    _signGrade(signRecGrade), _execGrad(execReqGrade)
{
    this->_Signed = false;
    this->_Name = name;
}

/**************************************************/

AForm::GradeTooHighException::GradeTooHighException()
{
    // std::cout << "AForm Deafult constructor called" << std::endl;
    this->message = "\033[0;31mERROR! Grade Too High Exception";
}

AForm::GradeTooHighException::~GradeTooHighException() throw()
{
    // std::cout << "GradeTooHighException AForm Destructor called" << std::endl;
}

const char* AForm::GradeTooHighException::what()const  throw()
{
    return (this->message.c_str());
}

 /**************************Low*************************/

AForm::GradeTooLowException::GradeTooLowException() : message("\033[0;31mERROR! Grade Too Low Exception\033[0m")
{
    
    // std::cout << "GradeTooLowException AForm Deafult constructor called" << std::endl;
}

AForm::GradeTooLowException::~GradeTooLowException()  throw()
{
    // std::cout << "GradeTooLowException AForm Destructor called" << std::endl;
}

const char* AForm::GradeTooLowException::what()const  throw()
{
    return (this->message.c_str());
}

    /***********************Accessures*************************************/
       
const bool &AForm::getSigned() const{return this->_Signed;}

const int &AForm::getSignGrade() const{return this->_signGrade;}

const int &AForm::getExecGrade() const{return this->_execGrad;}

const std::string &AForm::getName() const{return (this->_Name);}


/*****************************************************/
void AForm::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() > this->_signGrade)
        throw AForm::GradeTooLowException();
    this->_Signed = true;
}

bool AForm::checkRequirements(const Bureaucrat &executor) const
{
    if (this->getSigned() == false || executor.getGrade() > this->getExecGrade() )
    {
        return false;
    }
    return true;
}