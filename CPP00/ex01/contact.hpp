/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 08:23:30 by aankote           #+#    #+#             */
/*   Updated: 2023/08/21 20:49:32 by aankote          ###   ########.fr       */
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
		Contact (){}
	
		Contact(std::string lsn,std::string fsn, std::string nkn, std::string pn, std::string dsecr)
		{
			this->last_name = lsn;
			this->first_name = fsn;
			this->nickname = nkn;
			this->phone_num = pn;
			this->darkest_secret = dsecr;
		}
		
		void setlname(std::string value)
		{
			last_name = value;
		}
		
		void setfname(std::string value)
		{
			first_name = value;
		}
		
		void setnickname(std::string value)
		{
			nickname = value;
		}

		void setphone(std::string  value)
		{
			phone_num = value;
		}
		
		void setdsecret(std::string value)
		{
			darkest_secret = value;
		}
		
		std::string getlname()
		{
			return(last_name);	
		}

		std::string getfname()
		{
			return(first_name);	
		}

		std::string getnickname()
		{
			return(nickname);	
		}

		std::string getname()
		{
			return(phone_num);	
		}

		std::string getscret()
		{
			return(darkest_secret);	
		}
};

# endif