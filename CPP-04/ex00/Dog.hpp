/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:31 by aankote           #+#    #+#             */
/*   Updated: 2023/09/18 18:38:36 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();

        Dog(const Dog &other);

        Dog &operator=(const Dog &other);

        ~Dog();

        const std::string &getType()  const;
        
        void makeSound() const;
};