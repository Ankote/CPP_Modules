/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:50:27 by aankote           #+#    #+#             */
/*   Updated: 2023/09/01 09:03:39 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
    private:
        void    debug(void);
        void    warning(void);
        void    error(void);
        void    info(void);
    public:
        Harl();
        void complain( std::string level );
};
