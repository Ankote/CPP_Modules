/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:46:16 by aankote           #+#    #+#             */
/*   Updated: 2023/09/21 10:54:21 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:23 by aankote           #+#    #+#             */
/*   Updated: 2023/09/20 16:18:00 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    private:
    
        std::string ideas[100];
        
    public:

        Brain();

        Brain(const Brain &other);

        Brain &operator=(const Brain &other);

        ~Brain();

        void setIdeas(int index, std::string idea);

        std::string getIdeas(int index);
};