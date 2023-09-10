/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:41:16 by aankote           #+#    #+#             */
/*   Updated: 2023/09/09 21:14:51 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed _X;
        const Fixed _Y;

    public:
        Point();

        Point(Fixed x, Fixed y);

        Point(const Point& other);
    
        Point& operator=(const Point& other);

        Fixed getX() const;
        Fixed getY() const;
};
bool bsp(const Point a, const Point b, const Point c, const Point  point);
