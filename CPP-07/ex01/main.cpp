/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:00:05 by aankote           #+#    #+#             */
/*   Updated: 2023/10/12 16:50:12 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
    public:
    Awesome( void ): _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
    private:
    int _n;
};

std::ostream & operator<< (std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template<typename T >
void print(T const & x )
{
    std::cout << x << std::endl; return; 
}

int main() 
{
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5] ;
    iter(tab, 5, print<int>);
    iter(tab2, 5, print<Awesome>);
    return 0;
}

// int main() 
// {
    
//     int intArray[] = {1, 2, 3, 4, 5};
//     double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
//     std::string stringArray[] = {"Ayoub", "Younnes", "Ayman", "reda", "Aimad"};
//     bool booleanArray[] = {true, false, false, true, true};
    
//     std::cout << "Iterating over intArray:" << std::endl;
//     iter<int, int, int>(intArray, 5, PrintElement);
//     std::cout << std::endl;
    
//     std::cout << "Iterating over doubleArray:" << std::endl;
//     iter<double, double , double>(doubleArray, 5, PrintElement<double>);
//     std::cout << std::endl;
    
//     std::cout << "Iterating over Booleans:" << std::endl;
//     iter<bool, bool, bool>(booleanArray, 5, PrintElement<bool>);
//     std::cout << std::endl;

    
//     std::cout << "Iterating over String:" << std::endl;
//     iter<std::string, std::string , std::string>(stringArray, 5, PrintElement<std::string>);
//     std::cout << std::endl;
//     return 0;
// }