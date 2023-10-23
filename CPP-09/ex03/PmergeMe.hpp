/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:01:55 by aankote           #+#    #+#             */
/*   Updated: 2023/10/23 20:35:29 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>


class PmergeMe
{

    public: 
        std::vector<int> array1;
        std::vector<int> array2;
        PmergeMe();
        void insetionSort(std::vector<int> &arr);
        void PmergeMeFun(std::vector<int> &arr);
        void printNumbers(std::vector<int> &arr);
};