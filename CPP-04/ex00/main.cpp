/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:22:01 by aankote           #+#    #+#             */
/*   Updated: 2023/09/19 13:53:00 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

void testAnimal()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "Type       :   ";
    std::cout << j->getType() << " " << std::endl;
    std::cout << "Type       :   ";
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    
    delete i;
    delete j;
    delete meta;
}

void testWrongAnimal()
{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* j = new WrongDog();
    const WrongAnimal* i = new WrongCat();
    std::cout << "Type       :   ";
    std::cout << j->getType() << " " << std::endl;
    std::cout << "Type       :   ";
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    
    delete i;
    delete j;
    delete meta;
}

int main()
{
    testAnimal();

//  testWrongAnimal();
    return 0;
}
