/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:41:50 by aankote           #+#    #+#             */
/*   Updated: 2023/09/18 19:03:26 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
      public :
        WrongCat();

        WrongCat(const WrongCat &other);

        WrongCat &operator=(const WrongCat &other);

        ~WrongCat();

        const std::string &getType()  const;
        
        void makeSound() const;
};