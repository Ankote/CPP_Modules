/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:26 by aankote           #+#    #+#             */
/*   Updated: 2023/09/18 18:38:25 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
      public :
        Cat();

        Cat(const Cat &other);

        Cat &operator=(const Cat &other);

        ~Cat();

        const std::string &getType()  const;
        
        void makeSound() const;
};