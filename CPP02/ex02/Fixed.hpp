/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:33:05 by aankote           #+#    #+#             */
/*   Updated: 2023/09/07 14:41:54 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <cmath>

class Fixed 
{
    private :
        int _fixed_Point_Value;
        static const int _fractionalBits = 8;
    public :
        Fixed ();
        /***********************ex01************************/

        Fixed(const int value);

        Fixed(const float value);

        Fixed ( const Fixed &other);

        Fixed &operator = (const Fixed &other);

        int getRawBits(void) const;
        
        void setRawBits(int const raw);
        
        int toInt( void ) const;

        float toFloat( void ) const;

        /***************************************************/
        
        Fixed &operator+(const Fixed &src);
        Fixed &operator-(const Fixed &src);
        Fixed &operator*(const Fixed &src);
        Fixed &operator/(const Fixed &src);
        
        bool operator<(const Fixed &src);
        bool operator>(const Fixed &src);
        bool operator<=(const Fixed &src);
        bool operator>=(const Fixed &src);
        bool operator==(const Fixed &src);
        bool operator!=(const Fixed &src);
        
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
        
        static Fixed   &min (Fixed &a, Fixed &b);
        static Fixed   &max (Fixed &a, Fixed &b);
        
        static  Fixed  const  &min (const Fixed &a, const Fixed &b);
        static  Fixed  const  &max (const Fixed &a, const Fixed &b);
        
        ~Fixed ();



};

std::ostream	&operator<<(std::ostream &o, const Fixed &a);