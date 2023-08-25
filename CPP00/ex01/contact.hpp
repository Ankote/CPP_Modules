/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 08:23:30 by aankote           #+#    #+#             */
/*   Updated: 2023/08/25 21:08:46 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
#include <string>

class Contact
{
    private : 
    	std::string	last_name;
    	std::string	first_name;
    	std::string	nickname;
        std::string phone_num;
        std::string	darkest_secret;
	public :
		Contact ();
	
		Contact(std::string fsn, std::string lsn, std::string nkn,
					std::string pn, std::string dsecr);
		
		void setlname(std::string value);

		void setfname(std::string value);

		void setnickname(std::string value);

		void setphone(std::string  value);

		void setdsecret(std::string value);

		std::string getlname();
		
		std::string getfname();

		std::string getnickname();

		std::string getphone();

		std::string getscret();
};

# endif