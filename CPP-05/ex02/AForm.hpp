/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:36:54 by aankote           #+#    #+#             */
/*   Updated: 2023/10/04 11:11:18 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <stdlib.h>
#include <ctime>
class Bureaucrat;

class AForm
{
    private :
        
        const std::string _Name;
        
        bool _Signed;

        const int _signGrade;

        const int _execGrad;

    public :
    
        AForm();

        AForm(const AForm &);

        AForm &operator= (const AForm &);

        virtual ~AForm();
    /****************************************/
        AForm (std::string, const int &, const int &);
        
    /********************************Exception Classes******************************/

    class GradeTooHighException : public std::exception
    {
        private :

            std::string message;

        public :

            GradeTooHighException();
            virtual ~GradeTooHighException() throw();
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

    const int &getGrade() const;

    const std::string &getName() const;
    
    const bool &getSigned() const;

    const int &getSignGrade() const;

    const int &getExecGrade() const;

    /********************************************************************/

    virtual void beSigned(Bureaucrat &);
    /***********************************ex02**********************/

    virtual void execute(Bureaucrat const & executor) const = 0;

    int isExicuted();
    
    bool checkRequirements(const Bureaucrat &exceutor) const;
};

std::ostream &operator<<(std::ostream &o, const AForm &form);