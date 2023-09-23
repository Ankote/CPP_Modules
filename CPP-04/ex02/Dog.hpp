/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:31 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 15:57:19 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Animal.hpp"

class Dog : public AAnimal
{
    public :
        Dog();

        Dog(const Dog &other);

        Dog &operator=(const Dog &other);

        ~Dog();

        const std::string &getType()  const;
        
        void makeSound() const;
};