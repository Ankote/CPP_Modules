/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:23 by aankote           #+#    #+#             */
/*   Updated: 2023/09/19 13:52:11 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected :
        std::string type;
    
    public :
        Animal();

        Animal(const Animal &other);

        Animal &operator=(const Animal &other);

        virtual ~Animal();
        
        Animal(std::string type);
        
        virtual const std::string &getType()  const;
        
        virtual void makeSound() const;
        
        void setType(std::string);
};