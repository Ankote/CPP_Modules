/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:46:51 by aankote           #+#    #+#             */
/*   Updated: 2023/08/25 16:48:58 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <cctype>

int main()
{
    std::string commande;
    PhoneBook   phone;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_num;
    std::string darkest_secret;
    
    while (1)
    {
        std::cout << "Hi dude what is your commande : ";
        getline(std::cin, commande);
        if( commande == "EXIT")
            break;
        else  if(commande == "ADD")
        {
            first_name = scan_fname();
            last_name = scan_lname();
            nickname = scan_nickname();
            phone_num = scan_phone();
            darkest_secret = scan_dsecret();
            phone.add_contact(first_name, last_name, nickname, phone_num, darkest_secret);
        }
        else if((commande) == "SEARCH")
            phone.serch();
        else
            instractions();
            
    }
    return (0);
}





