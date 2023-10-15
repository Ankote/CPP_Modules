/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:50:06 by aankote           #+#    #+#             */
/*   Updated: 2023/10/14 21:04:38 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <list>

class Span
{
    private :
        unsigned int _N;
        std::list<int> _store;

    public :
        Span();
            
        Span(const Span & o);

        Span &operator = (const Span & o);
        
        ~Span();
        
        Span(unsigned const int &n);
        
        const int &operator[](const int &index) const;

        void addNumber(unsigned const int &n);
        void addRange(std::list<int>::const_iterator first, std::list<int>::const_iterator);
        int shortestSpan();
        
        int longestSpan();
};