/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:22:25 by aankote           #+#    #+#             */
/*   Updated: 2023/10/07 14:34:36 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "generate.hpp"


Base * generate(void)
{
    srand(std::time(NULL));
    int random_number = rand() % 3 + 1;

    switch (random_number)
    {
    case 1:
        return (dynamic_cast<Base *> (new DerivedA()));
        break;
    case 2:
        return (dynamic_cast<Base *> (new DerivedB()));
        break;
    default:
        return (dynamic_cast<Base *> (new DerivedC()));
        break;
    }
}

void identify(Base* p)
{
    if (!p)
        throw std::runtime_error("NULL Pointer");
    if (dynamic_cast<DerivedA *>(p))
        std::cout << "P is object Type A" << std::endl;
    else if (dynamic_cast<DerivedB *>(p))
        std::cout << "P is object Type B" << std::endl;
    else if (dynamic_cast<DerivedC *>(p))
        std::cout << "P is object Type C" << std::endl;
    else
        std::cerr <<("Can't cast because the Pointer Points to a Base Class") << std::endl;
}

void identify(Base& p)
{
    try
    {
        dynamic_cast<DerivedA&>(p);
        std::cout << "P is object Type A" << std::endl;
    }
    catch(...)
    {  
        try
        {
            dynamic_cast<DerivedB&>(p);
            std::cout << "P is object Type B" << std::endl;
        }
        catch(...)
        {
            try
            {
                dynamic_cast<DerivedC&>(p);
                std::cout << "P is object Type C" << std::endl;
            }
            catch(...)
            {
                std::cerr <<("Can't cast because the Pointer Point to Base Class") << std::endl;
            }
        }
    }
}

