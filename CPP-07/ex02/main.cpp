/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:55:07 by aankote           #+#    #+#             */
/*   Updated: 2023/10/14 10:24:04 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

void validTest()
{
    int x = 0;
    try
    {   
        Array<int> a(5);
        Array<int> b(7);
        a[x] = 2; 
        std::cout << a[x];
    }   
    
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void invalidTest()
{
    try
    {   
        Array<int> a(5);
        Array<int> b(7);
        a[7] = 2; 
        std::cout << a[7];
    }
    
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

//Deep copy
void testAssignement()
{
    try
    {   
        Array<int> a(7);
        Array<int> b(7);
        
        b = a;
        b[0]  = 4;
        std::cout << "a  =  " << a[0] << std::endl;
        std::cout << "b  =  " << b[0] << std::endl;
    }   
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testString()
{
    Array<std::string> a(4);
    Array<std::string> b(2);
    
    a[0] = "Ankote";
    a[1] = "Ayoub";

    b[0] = "Alaoui";
    b[1] = "Youssef";

    std::cout << a[0] << " " << a[1] << std::endl;
    std::cout << b[0] << " " << b[1] << std::endl;
}

void testBool()
{
   try
   {
        Array<bool> a(4);
        Array<bool> b(2);

        for (size_t i = 0; i < a.size(); i ++)
        {
            if (i % 2)
                a[i] = true;
            else
                a[i] = false;
        }

        for (size_t i = 0; i < a.size(); i ++)
        {
            if (a[i] == true)
                std::cout << "True ";
            else 
                std::cout << "False ";
        }
        std::cout << std::endl;
    }
   catch(const std::exception& e)
   {
    std::cerr << e.what() << '\n';
   }
}

class Myclass
{
    private :
        int i;
    public :
        Myclass()
        {}
        Myclass &operator=(const Myclass &o)
        {
            this->i = o.i;
            return (*this);
        }
        Myclass(const int &x) : i(x)
        {
            
        }
        const int &getI() const
        {
            return (i);    
        }
};

void testComplex()
{
    try
    {
        Myclass m1(1);
        Myclass m2(2);
        Myclass m3(3);
        Array<Myclass> a(4);
        a[0] = m1;
        a[1] = m2;
        a[2] = m3;

        for (int i = 0; i < 3; i++)
        {
            std::cout << a[i].getI() << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

int main()
{
    // testAssignement();
    // testString();
    // testBool();
    // testComplex();
    // testComplex();  
}

