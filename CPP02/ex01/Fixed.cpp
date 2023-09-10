/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:19:45 by aankote           #+#    #+#             */
/*   Updated: 2023/09/09 14:14:38 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

    Fixed::Fixed()
    {
        std::cout << "Default contructor called" << std::endl;
    }

    Fixed::Fixed (const Fixed &other)
    {
        std::cout << "Copy constructor called" << std::endl;
        *this = other;
    }
    
    Fixed &Fixed:: operator = (const Fixed &other)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->_fixed_point_value = other._fixed_point_value;
        return (*this);
    } 

    Fixed::~Fixed()
    {   
        std::cout << "Destructor called" << std::endl;
    }
    
    
    /*********************************************************************************************/
    
    Fixed::Fixed(const int value)
    {
        std::cout << "Int constructor called" << std::endl;
        this->_fixed_point_value = roundf(value * pow(2, this->_fractional_bits));
    }
    
    Fixed::Fixed( const float value)
    {
        std::cout << "Float constructor called" << std::endl;
        this->_fixed_point_value = roundf(value * (pow(2, this->_fractional_bits)));
    }

    float   Fixed::toFloat( void ) const
    {
        return (this->_fixed_point_value / pow(2, this->_fractional_bits));
    }
    
    int 	Fixed::toInt( void ) const
    {
        return (this->_fixed_point_value / pow(2, this->_fractional_bits));
    }

    std::ostream    &operator<<(std::ostream &o, const Fixed &a)
    {
        o << a.toFloat();
        std::cout << "     oprerator overload called";
        return (o);
    }

    /*********************************************************************************************/