/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:46:04 by aankote           #+#    #+#             */
/*   Updated: 2023/09/18 18:46:06 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

class WrongAnimal
{
    protected :
        std::string type;
    
    public :
        WrongAnimal();

        WrongAnimal(const WrongAnimal &other);

        WrongAnimal &operator=(const WrongAnimal &other);

        ~WrongAnimal();
        
        WrongAnimal(std::string type);
        
        const std::string &getType()  const;
        
        void makeSound() const;
        
        void setType(std::string);
};