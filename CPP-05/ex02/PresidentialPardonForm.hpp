/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:46:44 by aankote           #+#    #+#             */
/*   Updated: 2023/10/04 14:46:36 by aankote          ###   ########.fr       */
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

        void execute(Bureaucrat const & executor) const;
};