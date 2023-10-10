/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:46:57 by aankote           #+#    #+#             */
/*   Updated: 2023/10/10 17:20:04 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <fstream>
#include <string>

class ShrubberyCreationForm : public AForm
{
    private :
    
        std::string target;
        
        
    public :
        ShrubberyCreationForm();
        
        ShrubberyCreationForm(const ShrubberyCreationForm &);
        
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
        
        ~ShrubberyCreationForm();
        
        ShrubberyCreationForm(std::string);
        
        const std::string &getTarget() const;
        
        void execute(Bureaucrat const & executor) const;
};