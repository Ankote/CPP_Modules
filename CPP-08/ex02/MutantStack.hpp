/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:54:35 by aankote           #+#    #+#             */
/*   Updated: 2023/10/16 11:48:35 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <vector>

template <typename T, typename Container = std::deque<T> >
class MutantStack :public std::stack<T, Container> 
{
    private :
    
    public :
        MutantStack(){};

        ~MutantStack(){};
        
        MutantStack(const MutantStack &o)
        {
            *this = o;
        }


        MutantStack &operator=(const MutantStack &o)
        {
            if (this != &o)
                this->c = o.c;
            return (*this);
        }
        
        typedef typename Container::iterator  iterator;
        
        iterator begin()
        {
            return this->c.begin();
        }
        
        iterator end()
        {
            return this->c.end();
        }
};
