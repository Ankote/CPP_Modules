/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:46:44 by aankote           #+#    #+#             */
/*   Updated: 2023/10/10 17:19:38 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        
        PresidentialPardonForm(const PresidentialPardonForm&);
        
        PresidentialPardonForm&operator=(const PresidentialPardonForm&);
        
        ~PresidentialPardonForm();

        PresidentialPardonForm(std::string);
        
        void execute(Bureaucrat const & executor) const;

        const std::string &getTarget() const;
};