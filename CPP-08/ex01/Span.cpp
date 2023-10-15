/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:34:48 by aankote           #+#    #+#             */
/*   Updated: 2023/10/14 21:04:30 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Span.hpp"
 

Span::Span(): _N(0), _store(0)
{

}

Span::Span(const Span & o)
{
    *this = o;
}

Span &Span::operator = (const Span & o)
{
    std::list<int>::iterator it = _store.begin();
    (void)it;
    if (this == &o)
        return (*this);
    this->_N = o._N;
    return (*this);
}

Span::~Span()
{
    
}

Span::Span(unsigned const int &n): _N(n)
{
    
}

void Span::addNumber(unsigned const  int &n)
{
    if (this->_store.size() == this->_N)
        throw std::out_of_range("Out of range");
    this->_store.push_back(n);
}


int Span::shortestSpan()
{
    if (this->_store.size() < 2)
        throw std::out_of_range(" no span can be found.");
    
    std::list<int> tmpstor = this->_store;
    tmpstor.sort();
    std::list<int>::iterator current = tmpstor.begin();
    std::list<int>::iterator next = std::next(current);
    
    int smalest = *next - *current ;
    while(next != tmpstor.end())
    {
        if (*next - *current < smalest)
            smalest = *next - *current;
        std::advance(current, 1);
        std::advance(next, 1);
    }
    return (smalest);
}

int Span::longestSpan()
{
    std::list<int>::iterator min_elem = std::min_element(this->_store.begin(), this->_store.end());
    std::list<int>::iterator max_elem = std::max_element(this->_store.begin(), this->_store.end());
    
    if (this->_store.size() < 2)
        throw std::out_of_range(" no span can be found.");
    return (*max_elem - *min_elem);
}

/// why i can advence sonst iterator
const int &Span::operator[](const int &index) const
{
    if (index < (int)_N && index >= 0) 
    {
        std::list<int>::const_iterator it = _store.begin();
        std::advance(it, index);
        return (*it);
    } 
    else
    {
        throw std::out_of_range("Index out of bounds");
    }
}

void Span::addRange(std::list<int>::const_iterator first, std::list<int>::const_iterator last)
{
    
    if (this->_store.size() == this->_N)
        throw std::out_of_range("Out of range");
    this->_store.insert(_store.end(), first, last );
}