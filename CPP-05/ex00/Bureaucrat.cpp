#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
   
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    if (this == &other)
        return;

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this == &other)
        return (*this);
    
    this->_Name = other._Name;
    this->_grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name, int  grade)
{
    this->_Name = name;
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade > 150)
         throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade --;
}

void Bureaucrat::dicrementGrade()
{
 if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade ++;
}

const int &Bureaucrat::getGrade() const
{
    return (this->_grade);
}

const std::string &Bureaucrat::getName() const
{
    return (this->_Name);
}


void Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade > 150)
         throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}
/**************************************************/

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    this->message = "ERROR! Grade Too High Exception";
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{

}

const char* Bureaucrat::GradeTooHighException::what()const  throw()
{
    return (this->message.c_str());
}

 /**************************Low*************************/

 Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    this->message = "ERROR! Grade Too Low Exception";
}

Bureaucrat::GradeTooLowException::~GradeTooLowException()  throw()
{

}

const char* Bureaucrat::GradeTooLowException::what()const  throw()
{
    return (this->message.c_str());
}


std::ostream &operator<< (std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (os);
}