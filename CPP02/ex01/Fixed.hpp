/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:19:48 by aankote           #+#    #+#             */
/*   Updated: 2023/09/06 18:48:57 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <math.h>
class Fixed
{
    private :
        static const int _fractional_bits = 8;
        
        int _fixed_point_value; 
    public :
        Fixed();

        Fixed(const int value);

        Fixed(const float value);

        Fixed (const Fixed &other);

        Fixed &operator = (const Fixed &other);

        int getRawBits( void ) const;
        
        int toInt( void ) const;

        float toFloat( void ) const;
        
        ~Fixed();
        
};        
    std::ostream	&operator<<(std::ostream &o, const Fixed &a);