/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:36:50 by aankote           #+#    #+#             */
/*   Updated: 2023/10/10 14:49:45 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/****************************Canunical form******************/

Form::Form() : _Name("Unknowen"), _Signed(false), _signGrade(1), _execGrad(1)
{
    
}

Form::Form(const Form &o) :_signGrade(o._signGrade), _execGrad(o._execGrad)
{
    *this = o;
}

Form &Form::operator= (const Form &o)
{
    if (this == &o)
        return (*this);
    this->_Signed = o._Signed;
    return (*this);
}

Form::~Form()
{
    
}
/***************************************************/

Form::Form (std::string name, const int &signRecGrade, const int &execReqGrade) 
: _Name(name), _signGrade(signRecGrade), _execGrad(execReqGrade)
{
    if (this->_execGrad > 150 || this->_signGrade > 150)
        throw Form::GradeTooLowException();
    if (this->_execGrad < 0 || this->_signGrade < 0)
        throw Form::GradeTooHighException();
    this->_Signed = false;
}

/**************************************************/

Form::GradeTooHighException::GradeTooHighException()
{
    this->message = "\033[0;31mERROR! Grade Too High Exception";
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
    
}

const char* Form::GradeTooHighException::what()const  throw()
{
    return (this->message.c_str());
}

 /**************************  Low  *************************/

Form::GradeTooLowException::GradeTooLowException() : message("\033[0;31mERROR! Grade Too Low Exception\033[0m")
{
    
}

Form::GradeTooLowException::~GradeTooLowException()  throw()
{

}

const char* Form::GradeTooLowException::what()const  throw()
{
    return (this->message.c_str());
}

/***********************  Accessures  *************************************/
       
const bool &Form::getSigned() const{return this->_Signed;}

const int &Form::getSignGrade() const{return this->_signGrade;}

const int &Form::getExecGrade() const{return this->_execGrad;}

const std::string &Form::getName() const{return (this->_Name);}


/**********************  Ex01  *******************************/

void Form::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() > this->_signGrade)
        throw Form::GradeTooLowException();
    this->_Signed = true;
}

std::ostream &operator<<(std::ostream &o, const Form &form)
{
    o << "Name                        : " << form.getName() << std::endl;
    o << "grade required to sign Form : " << form.getSigned() << std::endl;
    o << "grade required to execute   : " << form.getExecGrade() << std::endl;
    o << "Status                      : ";
    if (form.getSigned())
        o << "Signed" << std::endl;
    else
        o << "Not Signed" << std::endl;
    return(o);
}
