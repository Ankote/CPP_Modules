/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:23:18 by aankote           #+#    #+#             */
/*   Updated: 2023/08/21 21:59:55 by aankote          ###   ########.fr       */
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
		int i = 0;
	
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

		void add_contact(std::string fn, std::string ln, std::string nick, std::string  pn, std::string ds)
		{
			setContact(Contact(fn, ln, nick, pn, ds));
		}
			
		public :
		void serch()
		{
			int index;
			int j;
			
			j = 0;
			while (j < i)
			{
				display(j, contact[j]);
				j ++;
			}
			while (index >= i || index < 0)
			{
				std::cout << "which index : ";
				std::cin >> index;
				std::cin.ignore();
			}
			display(index, contact[index]);
			
		}
};

# endif
