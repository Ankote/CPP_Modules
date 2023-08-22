/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:23:18 by aankote           #+#    #+#             */
/*   Updated: 2023/08/22 11:30:42 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include "contact.hpp"


std::string scan_fname();
std::string scan_lname();
std::string scan_nickname();
std::string scan_phone();
std::string scan_dsecret();
std::string replace_str(std::string str);
void display(int index, Contact c);

class PhoneBook
{
    private :
        Contact contact[8];
		int i;
	
	public :
		void setContact(Contact c)
		{
			if(i > 7)
				i = 0;
			contact[i++] = c;
		}

		Contact getContact()
		{
			return contact[i];
		}

		void add_contact(std::string fn, std::string ln, std::string nick, std::string  pn, std::string ds);
		void serch();
	
};

# endif
