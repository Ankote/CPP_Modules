/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:36:50 by aankote           #+#    #+#             */
/*   Updated: 2023/10/10 17:11:39 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/****************************Canunical AForm******************/

AForm::AForm() :  _Signed(false), _signGrade(1), _execGrad(1)
{
    
}

AForm::AForm(const AForm &o) :_signGrade(o._signGrade), _execGrad(o._execGrad)
{
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
    return (*this);
}

AForm::~AForm()
{
    
}
/***************************************************/

AForm::AForm (std::string name, const int &signRecGrade, const int &execReqGrade) :
  _Name(name), _signGrade(signRecGrade), _execGrad(execReqGrade)
{
    this->_Signed = false;
}

/**************************************************/

AForm::GradeTooHighException::GradeTooHighException()
{
    this->message = "\033[0;31mERROR! Grade Too High Exception";
}

AForm::GradeTooHighException::GradeTooHighException(std::string str)
{
    this->message = str;
}


AForm::GradeTooHighException::~GradeTooHighException() throw()
{
    
}

const char* AForm::GradeTooHighException::what()const  throw()
{
    return (this->message.c_str());
}

 /**************************Low*************************/

AForm::GradeTooLowException::GradeTooLowException() : message("\033[0;31mERROR! Grade Too Low Exception\033[0m")
{
    
}

AForm::GradeTooLowException::GradeTooLowException(std::string msg) : message(msg)
{
    
}

AForm::GradeTooLowException::~GradeTooLowException()  throw()
{
    
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