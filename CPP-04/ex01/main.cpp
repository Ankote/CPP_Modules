/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:22:01 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 14:14:26 by aankote          ###   ########.fr       */
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


void    DeepCopy1()
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

void    DeepCopy2()
{
    Animal *an = new Animal();;
    Animal *Cat1 = new Cat();
    Animal *Cat2 = new Cat();
    
    *Cat2 = *Cat1;   

    Cat2->makeSound();
    *an = *Cat2;

    an->makeSound();

    delete Cat1;
    delete Cat2;
    delete an;
}

void    Addit_test()
{
    Cat *CatPtr = new Cat();
    
    Cat CatCopy(*CatPtr);
    
    Brain *brain_ptr = new Brain;

    brain_ptr->setIdeas(55, "need food");
    
    CatCopy.setBrain(brain_ptr);
    brain_ptr->setIdeas(55, "nothiiiing");
    
    std::cout << "\n________________________________________\n\n";
    std::cout << brain_ptr->getIdeas(55) << std::endl;
    std::cout << CatCopy.getBrain()->getIdeas(55) << std::endl;
    std::cout << "________________________________________\n";
    
    delete brain_ptr;
    delete CatPtr;
}

int main()
{
    DeepCopy2();

    return 0;
}
