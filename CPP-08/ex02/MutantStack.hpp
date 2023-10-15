/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:54:35 by aankote           #+#    #+#             */
/*   Updated: 2023/10/15 21:32:08 by aankote          ###   ########.fr       */
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


// template <typename T>
// class MutantStack :public std::stack<T> 
// {
//     private :
    
//     public :
//         MutantStack(){};

//         ~MutantStack(){};
        
//         MutantStack(const MutantStack &o)
//         {
//             *this = o;
//         }

//         MutantStack &operator=(const MutantStack &o)
//         {
//             if (this != &o)
//                 this->c = o.c;
//             return (*this);
//         }
        
//         typedef typename std::deque<T>::iterator    iterator;
        
//         iterator mybegin()
//         {
//             return this->c.begin();
//         }
        
//         iterator end()
//         {
//             return this->c.end();
//         }
// };

// //I workd with deque because he like stack

// //stack 