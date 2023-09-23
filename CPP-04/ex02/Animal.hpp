/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:23 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 15:24:35 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
    protected :
        std::string type;
    
    public :
        AAnimal();

        AAnimal(const AAnimal &other);

        AAnimal &operator=(const AAnimal &other);

        virtual ~AAnimal();
        
        AAnimal(std::string type);
        
        virtual const std::string &getType()  const;
        
        virtual void makeSound() const = 0;
        
        void setType(std::string);
};