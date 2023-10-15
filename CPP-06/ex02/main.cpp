/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:21:05 by aankote           #+#    #+#             */
/*   Updated: 2023/10/11 17:27:12 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "generate.hpp"

void pointValidTest()
{
    Base *b = generate();
    identify(b);
    delete b;
}

void pointInvalidTest()
{
    Base *b = new Base();
    identify(b);
    delete b;
}


void refValidTsey()
{
    Base *b = generate();
    
    identify(*b);   
    delete b; 
}

void refFalsTsey()
{
    Base *b = new Base();
    
    identify(*b);   
    delete b; 
}

int main()
{
    refFalsTsey();
}