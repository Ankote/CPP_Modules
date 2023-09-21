/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:12:11 by aankote           #+#    #+#             */
/*   Updated: 2023/09/16 14:25:51 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
    protected :
        std::string    _Name;

        int            _HitPoint;

        int            _AttackDamage;
        
        int             _EnergyPoint;
    
    public :
    
        ClapTrap();

        ClapTrap &operator=(const ClapTrap &other);

        ClapTrap(const ClapTrap &other);
        
        ClapTrap(std::string name);
        
        ~ClapTrap();

        int getHitpoint ();

        int getAttackDamage();

        int getEnergyPoint();

        const std::string &getName() const;

        void setHitPoint (int hitP);

        void setAttackDamage(int atD);

        void setEnergyPoint(int eD);

        void setName(std::string name);

        
        void attack(const std::string& target);
        
        void takeDamage(unsigned int amount);
        
        void beRepaired(unsigned int amount);
        
}; 