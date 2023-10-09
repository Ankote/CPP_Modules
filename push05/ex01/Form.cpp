/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:36:50 by aankote           #+#    #+#             */
/*   Updated: 2023/10/03 18:53:10 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/****************************Canunical form******************/

Form::Form() : _Name("Unknowen"), _Signed(false), _signGrade(1), _execGrad(1)
{
    
}

Form::Form(const Form &o) :_signGrade(o._signGrade), _execGrad(o._execGrad)
{
    _Name = o._Name;
    this->_Signed = o._Signed;
    if (this->_execGrad > 150 || this->_signGrade > 150)
        throw Form::GradeTooLowException();
    if (this->_execGrad < 0 || this->_signGrade < 0)
        throw Form::GradeTooLowException();
    // std::cout << "Form Copy Constructor Called" << std::endl;
}

Form &Form::operator= (const Form &o)
{
    if (this == &o)
        return (*this);
    _Name = o._Name;
    // std::cout << "Form Copy Constructor Called" << std::endl;
    return (*this);
}

Form::~Form()
{
    // std::cout << "Form Destructor Called" << std::endl;
}
/***************************************************/

Form::Form (std::string name, const int &signRecGrade, const int &execReqGrade) :
    _signGrade(signRecGrade), _execGrad(execReqGrade)
{
    this->_Signed = false;
    this->_Name = name;
}

/**************************************************/

Form::GradeTooHighException::GradeTooHighException()
{
    // std::cout << "Form Deafult constructor called" << std::endl;
    this->message = "\033[0;31mERROR! Grade Too High Exception";
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
    // std::cout << "GradeTooHighException Form Destructor called" << std::endl;
}

const char* Form::GradeTooHighException::what()const  throw()
{
    return (this->message.c_str());
}

 /**************************Low*************************/

Form::GradeTooLowException::GradeTooLowException() : message("\033[0;31mERROR! Grade Too Low Exception\033[0m")
{
    
    // std::cout << "GradeTooLowException Form Deafult constructor called" << std::endl;
}

Form::GradeTooLowException::~GradeTooLowException()  throw()
{
    // std::cout << "GradeTooLowException Form Destructor called" << std::endl;
}

const char* Form::GradeTooLowException::what()const  throw()
{
    return (this->message.c_str());
}

    /***********************Accessures*************************************/
       
const bool &Form::getSigned() const{return this->_Signed;}

const int &Form::getSignGrade() const{return this->_signGrade;}

const int &Form::getExecGrade() const{return this->_execGrad;}

const std::string &Form::getName() const{return (this->_Name);}


/*****************************************************/
void Form::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() > this->_signGrade)
        throw Form::GradeTooLowException();
    this->_Signed = true;
}