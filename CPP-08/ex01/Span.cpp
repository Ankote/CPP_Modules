/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:34:48 by aankote           #+#    #+#             */
/*   Updated: 2023/10/16 18:27:42 by aankote          ###   ########.fr       */
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
    if (this == &o)
        return (*this);
    this->_N = o._N;
    this->_store = o._store;
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
    
    std::vector<int> tmpstor = this->_store;
    sort(tmpstor.begin(), tmpstor.end());
    std::vector<int>::iterator current = tmpstor.begin();
    std::vector<int>::iterator next = std::next(current);
    
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
    std::vector<int>::iterator min_elem = std::min_element(this->_store.begin(), this->_store.end());
    std::vector<int>::iterator max_elem = std::max_element(this->_store.begin(), this->_store.end());
    
    if (this->_store.size() < 2)
        throw std::out_of_range(" no span can be found.");
    return (*max_elem - *min_elem);
}

const int &Span::operator[](const int &index) const
{
    if (index < (int)_N && index >= 0) 
    {
        std::vector<int>::const_iterator it = _store.begin();
        std::advance(it, index);
        return (*it);
    } 
    else
    {
        throw std::out_of_range("Index out of bounds");
    }
}

void Span::addRange(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last)
{
    if (this->_store.size() == this->_N)
        throw std::out_of_range("Out of range");
    this->_store.insert(_store.end(), first, last );
}