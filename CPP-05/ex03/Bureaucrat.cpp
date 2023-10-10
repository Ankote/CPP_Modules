#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _Name("Unknowen", 1)
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
    
    this->_grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name, int  grade) : _Name(name)
{
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
    {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade = grade;
}

/**************************************************/

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    this->message = "\033[0;31mERROR! Grade Too High Exception\033[0m";
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{

}

const char* Bureaucrat::GradeTooHighException::what()const  throw()
{
    return (this->message.c_str());
}

 /**************************Low*************************/

Bureaucrat::GradeTooLowException::GradeTooLowException() : message("\033[0;31mERROR! Grade Too Low Exception\033[0m")
{
    
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


/****************************************Ex01**********************************************/
void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout <<"\033[0;32m"<< this->_Name << " signed " << form.getName() <<"\033[0m"<< std::endl;
    }
    catch(std::exception &e)
    {
        std::cout <<"\033[0;31m" << this->_Name << " couldn’t sign " << form.getName();
        std::cout << " maybe Because " << e.what()  << std::endl;
    }
}

/****************************************Ex02**********************************************/

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout <<"\033[0;32m"<< this->_Name << " Executed " << form.getName() <<"\033[0m"<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout <<"\033[0;31m" << this->_Name << " couldn’t Exicute" << form.getName();
        std::cout << " maybe Because " <<  e.what() << '\n';
    }
}