/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:25:29 by aankote           #+#    #+#             */
/*   Updated: 2023/09/02 11:46:38 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_
# define _ZOMBUE_

# include <iostream>

class Zombie
{
    private :
        std::string name;
    
    public :
        Zombie();

        Zombie(std::string name);

        void announce ( void);

        ~Zombie ();
};

Zombie* zombieHorde( int N, std::string name );
# endif