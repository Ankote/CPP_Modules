/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:16:57 by aankote           #+#    #+#             */
/*   Updated: 2023/10/13 18:20:35 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

template <typename T>
int easyfind(const T& container, int target)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), target);
    if (it != container.end())
        return std::distance(container.begin(), it);
    throw std::out_of_range("Cant find  target");
}

// template <typename T>
// int easyfind(const T& container, int target) {
//     typename T::const_iterator it = std::find(container.begin(), container.end(), target);
//     if (it != container.end()) {
//         return std::distance(container.begin(), it);
//     }
//     throw std::out_of_range("Can't find target");
// }
