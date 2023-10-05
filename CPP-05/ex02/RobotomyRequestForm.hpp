/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:46:52 by aankote           #+#    #+#             */
/*   Updated: 2023/10/04 14:46:27 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    private :
        std::string target;
    public :
        RobotomyRequestForm();
        
        RobotomyRequestForm(const RobotomyRequestForm&);
        
        RobotomyRequestForm&operator=(const RobotomyRequestForm&);
        
        ~RobotomyRequestForm();
        
        void execute(Bureaucrat const & executor) const;
};