/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 21:48:33 by aankote           #+#    #+#             */
/*   Updated: 2023/08/31 22:33:24 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP    
# define HARL_HPP

# include <iostream>

class Harl
{
    private:
        
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl();
        void complain( std::string level );
};


# endif