/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:13:33 by aankote           #+#    #+#             */
/*   Updated: 2023/08/28 20:39:16 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>
class Weapon
{
    private :
        std::string type;
    
    public :
        Weapon();
        
        Weapon(std::string type);
    
        const std::string & getType() const;
        
        void setType(std::string type);

};

# endif