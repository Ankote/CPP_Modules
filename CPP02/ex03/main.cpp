/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:33:21 by aankote           #+#    #+#             */
/*   Updated: 2023/09/10 14:32:52 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include <iostream>

// Declare the bsp function (assuming it's defined elsewhere)
int main() {
    // Create points for the triangle vertices
    Point vertexA(0.0f, 0.0f);
    Point vertexB(6.0f, 0.0f);
    Point vertexC(3.0f, 4.0f);

    // Test if a point is inside or on the perimeter of the triangle
    Point testPoint(1.0f, 1.0f);  // Example test point on the perimeter of the triangle

    if (bsp(vertexA, vertexB, vertexC, testPoint)) {
        std::cout << "inside" << std::endl;
    } else {
        std::cout << "outside or on the perimeter" << std::endl;
    }

    return 0;
}
