/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:24:08 by aankote           #+#    #+#             */
/*   Updated: 2023/08/21 14:51:05 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	scan_fname()
{
	std::string first_name;
	
	while(1)
	{
		std::cout << "\tFirst Name      : ";
		getline (std::cin, first_name);
		if(first_name.empty())
			std::cout << "\tInvalide try again!\n";
		else
			break;
		
	}
	return (first_name);
}

std::string scan_lname()
{
	std::string last_name;
	
	while(1)
	{
		std::cout << std::endl <<  "\tLast Name       : ";
		getline (std::cin, last_name);
		if(last_name.empty())
			std::cout << "\tInvalide!! try again...\n";
		else
			break;
	}
	return (last_name);
}

std::string scan_nickname()
{
	std::string nickname;
	
	while(1)
	{
		std::cout << std::endl  << "\tNickname         : ";
    	getline (std::cin, nickname);
		if(nickname.empty())
			std::cout << "\tInvalide try again!\n";
		else
			break;
	}
	return (nickname);
}

int 		check_phonenum(std::string value)
{
	int i;

	i = 0;
	while(value[i])
	{
		if (!isdigit (value[i]) && (value[i] != '+' && i != 0))
		{
				return (0);
		}
		if(value[i] == '+')
		{
			while (value[i] && value[i] == '+')
				i ++;
			if ((value[i] < '0' || value[i] > '9'))
				return (0);
		}
		i ++;
	} 
	return (1);
}

std::string	scan_phone()
{
	std::string phone_num;
	
	
	while(1)
	{
		std::cout<< std::endl << "\tPhone number    : ";
		getline (std::cin, phone_num);
		if (phone_num.empty() || !check_phonenum(phone_num))
			std::cout << "\tInvalide try again!\n";
		else
			break;
	}
	return (phone_num);
}

std::string	scan_dsecret()
{
	std::string dsecret;
	
	while(dsecret.empty())
	{
		std::cout << "\tdark secret    :  ";
    	getline (std::cin, dsecret);
	}
	return (dsecret);
}

std::string replace_str(std::string str)
{
	int len;

	len = str.length();
	if(len > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
	return (str);
}

