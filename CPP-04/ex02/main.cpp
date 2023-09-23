/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:22:01 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 15:58:12 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void testAAnimal()
{
    AAnimal* j = new Dog();
    AAnimal* i = new Cat();
    
    std::cout << "Type       :   ";
    std::cout << j->getType() << " " << std::endl;
    std::cout << "Type       :   ";
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    
    delete i;
    delete j;
}

/**********************************************************************************
void WrongTest()
{
    AAnimal* j = new AAnimal(); // here I can't create  an instance of class AAnimal
    AAnimal* i = new Cat();
    
    std::cout << "Type       :   ";
    std::cout << j->getType() << " " << std::endl;
    std::cout << "Type       :   ";
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    
    delete i;
    delete j;
}
************************************************************************************/

int main()
{
    testAAnimal();
    // testWrongAAnimal();
    return 0;
}
