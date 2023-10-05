/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:36:54 by aankote           #+#    #+#             */
/*   Updated: 2023/10/03 17:46:58 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private :
        
        std::string _Name;
        
        bool _Signed;

        const int _signGrade;

        const int _execGrad;

    public :
    
        Form();

        Form(const Form &);

        Form &operator= (const Form &);

        ~Form();
    /****************************************/
        Form (std::string, const int &, const int &);
        
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

    const int &getGrade() const;

    const std::string &getName() const;
    
    const bool &getSigned() const;

    const int &getSignGrade() const;

    const int &getExecGrade() const;

    /********************************************************************/

    void beSigned(Bureaucrat &);

};