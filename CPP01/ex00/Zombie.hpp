/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:02:34 by aankote           #+#    #+#             */
/*   Updated: 2023/09/03 10:04:58 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_
# include <iostream>
# include <string>

class Zombie
{
    private :
        std::string name;
    
    public :
        Zombie();
        
        Zombie(std::string name);

        void announce( void );
        
        ~Zombie();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif