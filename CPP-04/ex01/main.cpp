/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:22:01 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 10:56:33 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <stdio.h>


void    subTest()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
}


void    DeepCopy()
{
    {
        Cat c1;
        std::cout << std::endl;
        Cat c2(c1);
        std::cout << std::endl;

        std::cout << "ptr is : " << c1.getIdea(1) << std::endl;
        std::cout << std::endl;
    }
    std::cout << "\n___________________________________________________________\n\n";
    {
        Dog d1;
        std::cout << std::endl;
        Dog d2 = d1;
        std::cout << std::endl;
        std::cout << "ptr is : " << d1.getBrain() << std::endl;
        std::cout << "the addr is : " << d2.getBrain() << std::endl;
    }
}

void    Addit_test()
{
    Cat *CatPtr = new Cat();
    
    Cat CatCopy(*CatPtr);
    
    delete CatPtr;
}

int main()
{
    DeepCopy();

    return 0;
}
