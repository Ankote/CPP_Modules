#pragma once

#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;

class Bureaucrat 
{
    private :

        std::string _Name;

        int _grade;
    
    public :

    /*****************Canonical Form and Connstructors**************************/

        Bureaucrat();

        Bureaucrat(const Bureaucrat &other);

        Bureaucrat &operator=(const Bureaucrat &other);

        ~Bureaucrat();

        Bureaucrat (std::string, int grade);

    /*****************Methides**************************/

        void incrementGrade();

        void dicrementGrade();

        const int &getGrade() const;

        const std::string &getName() const;   

        void setGrade(int grade);

        void setName(const std::string &name);

    /********************************Exception Classes******************************/

        class GradeTooHighException : public std::exception
        {
            private :

                std::string message;

            public :

                GradeTooHighException();
                virtual ~GradeTooHighException() throw();;
                virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            private : 
                std::string message;

            public :

                GradeTooLowException() ;
                virtual ~GradeTooLowException() throw();
                virtual const char* what() const throw();
        };

        /*************************Ex01*****************/
        void signForm(Form &);
};

std::ostream &operator<< (std::ostream& os, const Bureaucrat& obj);
