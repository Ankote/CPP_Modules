/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:51:04 by aankote           #+#    #+#             */
/*   Updated: 2023/09/18 19:03:20 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once


#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    public :
        WrongDog();

        WrongDog(const WrongDog &other);

        WrongDog &operator=(const WrongDog &other);

        ~WrongDog();

        const std::string &getType()  const;
        
        void makeSound() const;
};