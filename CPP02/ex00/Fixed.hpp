/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:15:42 by aankote           #+#    #+#             */
/*   Updated: 2023/09/08 21:08:29 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>

class Fixed
{
    private :

        int _fixed_point_value;
        
        static const int _fractional_bits = 8;
    
    public :
    
        Fixed(void);
        
        Fixed(const Fixed &src);

        ~Fixed(void);
        
        Fixed &operator=(const Fixed &rhs);
        
        int getRawBits(void) const;
        
        void setRawBits(int const raw);

};

#endif