#pragma once

#include <iostream>

#include <exception>

class Bureaucrat
{
    private :

        const std::string _Name;

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
};

std::ostream &operator<< (std::ostream& os, const Bureaucrat& obj);
