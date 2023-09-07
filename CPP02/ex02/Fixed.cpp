/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:33:02 by aankote           #+#    #+#             */
/*   Updated: 2023/09/07 17:03:16 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/****************************************************************************/

Fixed::Fixed()
{
    this->_fixed_Point_Value = 0;
    // std::cout << "Default contructor called" << std::endl;
}

Fixed::Fixed (const Fixed &other)
{
        // std::cout << "Copy constructor called" << std::endl;
        this->_fixed_Point_Value = other._fixed_Point_Value;
    // *this = other;
}

Fixed::Fixed(const int value)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_fixed_Point_Value = roundf(value * pow(2, this->_fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_Point_Value = rhs._fixed_Point_Value;
    return *this;
}

Fixed::Fixed( const float value)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_fixed_Point_Value = roundf(value * (pow(2, this->_fractionalBits
    )));
}

float	Fixed::toFloat( void ) const
{
    return (this->_fixed_Point_Value / pow(2, this->_fractionalBits));
}

int 	Fixed::toInt( void ) const
{
    return (this->_fixed_Point_Value / pow(2, this->_fractionalBits));
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called";
    return (this->_fixed_Point_Value);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed_Point_Value = raw;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

/********************************************************************************/

Fixed &Fixed::operator+(const Fixed &a)
{
    this->setRawBits(this->getRawBits() + a.getRawBits());
    return (*this);
}

Fixed &Fixed::operator*(const Fixed &a)
{
    this->setRawBits(this->_fixed_Point_Value * a.getRawBits());
    this->setRawBits(this->toFloat());
    return (*this);
}

Fixed &Fixed::operator-(const Fixed &a)
{
    this->setRawBits(this->getRawBits() - a.getRawBits());
    return (*this);
}

Fixed &Fixed::operator/(const Fixed &a)
{
    this->setRawBits(this->getRawBits() * a.getRawBits());
    return (*this);
}

bool Fixed::operator<(const Fixed &src)
{
    return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator>(const Fixed &src)
{
    return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src)
{
    return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator>=(const Fixed &src)
{
    return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator==(const Fixed &src)
{
    return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src)
{
    return (this->getRawBits() != src.getRawBits());
}

Fixed &Fixed::operator--()
{
    (*this)--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
   Fixed tmp = *this;
   --(*this);
    return (tmp);
}

Fixed &Fixed::operator++() //pre_Inc
{
    this->_fixed_Point_Value ++;
    return (*this);
}

Fixed Fixed::operator++(int) //Pos_inc
{
    Fixed tmp = *this;

    this->_fixed_Point_Value ++;
    return (tmp);
}

Fixed const &Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed & min(Fixed &a, Fixed &b)
{
        return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed const &Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a.getRawBits() < b.getRawBits()) ? b : a;
}

Fixed & max(Fixed &a, Fixed &b)
{
        return (a.getRawBits() < b.getRawBits()) ? b : a;
}


std::ostream	&operator<<(std::ostream &o, const Fixed &a)
{
    o << a.toFloat();
    return (o);
}

/******************************************ex01**********************************/
