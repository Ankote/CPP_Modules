/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:21:05 by aankote           #+#    #+#             */
/*   Updated: 2023/10/07 14:34:50 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "generate.hpp"

void pointValidTsey()
{
    Base *b = generate();
    identify(b);
    delete b;
}

void pointFalsTsey()
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
    // pointValidTsey();
    // pointFalsTsey();
    // refValidTsey();
    refFalsTsey() ;
    return 0;
}