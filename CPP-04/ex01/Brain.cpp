/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:50:48 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 10:55:10 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "{Brain} Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    for (int i= 0; i < 100 ; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    std::cout << "{Brain} Copy constructor Called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    for (int i= 0; i < 100 ; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
   
    return (*this);
}

Brain::~Brain()
{
    std::cout << "{Brain} Destructor Called" << std::endl;
}

void Brain::setIdeas(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        this->ideas[index] = idea;
}

std::string  Brain::getIdeas(int index)
{
    if (index >= 0 && index < 100)
        return (this->ideas[index]);
    return ("ERR");
}