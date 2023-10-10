/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:05:30 by aankote           #+#    #+#             */
/*   Updated: 2023/10/10 16:00:24 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test1()
{
    std::cout << "\n\n\033[0;34m_________________Colden't signe(not signed)_________________\033[0m\n\n";
     try
    {
    
        Form form1("CNSS", 1, 14);
        Bureaucrat b("Ayoub", 10);

        b.signForm(form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test2()
{
    std::cout << "\n\n\033[0;34m_______________Signed (try to sign but can't)________________\033[0m\n\n";
    try
    {
    
        Form form1("CNSS", 1, 5);
        Bureaucrat b("Ayoub", 10);
        b.signForm(form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test3()
{
    std::cout << "\n\n\033[0;34m__________________________Signed ___________________________\033[0m\n\n";
     try
    {
    
        Form form1("CNSS", 12, 14);
        Bureaucrat b("Ayoub", 10);
        b.signForm(form1);
        std::cout << form1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    // test1();
    // test2();
    test3();
    
}

