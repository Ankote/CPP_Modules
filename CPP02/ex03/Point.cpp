/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:42:52 by aankote           #+#    #+#             */
/*   Updated: 2023/09/09 21:14:14 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>


Point::Point(){};

Point::Point(Fixed _x, Fixed _y) : _X(_x), _Y(_y) {}

Point::Point(const Point& other) : _X(other._X), _Y(other._Y) {}

Point& Point::operator=(const Point& other) {
    (void)other;
        return *this;
}
Fixed Point::getX() const { return _X;}

Fixed Point::getY() const { return _Y;}