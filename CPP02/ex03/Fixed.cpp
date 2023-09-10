/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:33:02 by aankote           #+#    #+#             */
/*   Updated: 2023/09/10 16:50:03 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/****************************************************************************/

Fixed::Fixed()
{
    this->_fixed_Point_Value = 0;
}

Fixed::Fixed (const Fixed &other)
{
        this->_fixed_Point_Value = other._fixed_Point_Value;
}

Fixed::Fixed(const int value)
{
    this->_fixed_Point_Value = roundf(value * pow(2, this->_fractionalBits));
}

Fixed::Fixed( const float value)
{
    this->_fixed_Point_Value = roundf(value * (pow(2, this->_fractionalBits)));
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    this->_fixed_Point_Value = rhs._fixed_Point_Value;
    return *this;
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
    return (this->_fixed_Point_Value);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed_Point_Value = raw;
}

Fixed::~Fixed()
{
}

/*******************************Operations*******************************************/

Fixed Fixed::operator+(const Fixed &a) const
{
    Fixed  tmp;
    tmp.setRawBits(this->getRawBits() + a.getRawBits()) ;
    return (tmp);
}

Fixed Fixed::operator*(const Fixed &a) const
{
    Fixed tmp;
    tmp.setRawBits((this->getRawBits() * a.getRawBits()) / 256);
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &a) const
{
    Fixed tmp;
    tmp.setRawBits ((float)this->getRawBits() / (float)a.getRawBits() * 256 );
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &a)  const
{
    Fixed tmp;
    tmp.setRawBits(this->getRawBits() - a.getRawBits());
    return (tmp);
}

/***********************************Comparaison**************************************************/

bool Fixed::operator<(const Fixed &src) const
{
    return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator>(const Fixed &src)  const
{
    return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src)  const
{
    return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator>=(const Fixed &src)  const
{
    return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator==(const Fixed &src)  const
{
    return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src)  const
{
    return (this->getRawBits() != src.getRawBits());
}

/*******************************************Incriment***************************************************/
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

/**************************************MIN MAX*****************************************************/

Fixed const &Fixed::min(const Fixed & a, const Fixed & b)  
{
    return (a < b) ? a : b;
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
        return (a < b) ? a : b;
}

Fixed const & Fixed::max(const Fixed& a, const Fixed& b) 
{
    return (a < b) ? b : a;
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
        return (a < b) ? b : a;
}

std::ostream	&operator<<(std::ostream &o, const Fixed &a)
{
    o << a.toFloat();
    return (o);
}
