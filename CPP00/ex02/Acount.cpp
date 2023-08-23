/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acount.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:53:49 by aankote           #+#    #+#             */
/*   Updated: 2023/08/23 20:59:00 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Acount.hpp"
#include <ctime>
#include <iostream>


Account::Account( int initial_deposit )
{
        this->_accountIndex = getNbAccounts();
        this->_nbAccounts ++;
        this->_nbAccounts ++;
        this->_amount = initial_deposit;
        this->_totalAmount += initial_deposit;
        char formattedTime[9];

        std::time_t currentTime = std::time(NULL);
        std::tm* timeInfo = std::localtime(&currentTime);
        std::strftime(formattedTime, sizeof(formattedTime), "%Y%d%m", timeInfo);
        std::cout << "["<< std::cout << formattedTime << "]";
}

void	Account::makeDeposit( int deposit )
{
    _totalNbDeposits ++;
    _nbDeposits ++;
    _amount += deposit; 
}

bool	Account::makeWithdrawal( int withdrawal )
{
    (void)withdrawal;
    return (1);
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_nbDeposits);
}

int	Account::getNbWithdrawals( void );
{
    return (_nbWithdrawals);
}


int main()
{
    Account ac(1);
}