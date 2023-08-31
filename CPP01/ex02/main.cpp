/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:04:32 by aankote           #+#    #+#             */
/*   Updated: 2023/08/28 19:20:41 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main()
{
	std::string message;
	std::string *stringPTR;
	std::string &stringREF =message;
	
	message = "HI THIS IS BRAIN";
	stringPTR = &message;
	
	std::cout << "_________Addresses_________\n" << std::endl;
	std::cout << "• The memory address of the string variable : ";
	std::cout << &message << std::endl;
	std::cout << "• The memory address held by stringPTR      : ";
	std::cout << stringPTR << std::endl;
	std::cout << "• The memory address held by stringREF      : ";
	std::cout << &stringREF << std::endl;

	std::cout << "\n_________Values_________\n" << std::endl;

	std::cout << "• The value of the string variable          : ";
	std::cout << message  << std::endl;
	std::cout << "• The value pointed to by stringPTR         : ";
	std::cout << *stringPTR << std::endl;
	
	std::cout  << "• The value pointed to by stringREF         : ";
	std::cout << stringREF << std::endl;
}
