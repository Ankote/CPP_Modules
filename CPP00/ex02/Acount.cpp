/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acount.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:53:49 by aankote           #+#    #+#             */
/*   Updated: 2023/08/23 18:14:18 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Acount.hpp"
#include <ctime>
#include <iostream>

Acount::Account( int initial_deposit )
{
       _accountIndex = getNbAccounts();
       _nbAccounts ++;
       _nbAccounts ++;
       _amount = initial_deposit;
       _totalAmount += _amount;

        std::time_t currentTime = std::time(nullptr);
        std::tm* timeInfo = std::localtime(&currentTime);
        std::strftime(formattedTime, sizeof(formattedTime), "%Y%d%m", timeInfo);
        std::cout << "["<< std::cout << formattedTime << "]";
}

void	Acount::makeDeposit( int deposit )
{
    _totalNbDeposits ++;
    _nbDeposits ++;
    _amount += deposit; 
}

bool	Acount::makeWithdrawal( int withdrawal )
{
    
    return (1);
}

static int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
static int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

static int	Account::getNbDeposits( void )
{
    return (_nbDeposits);
}

static int	Account::getNbWithdrawals( void );
{
    return (_nbWithdrawals);
}

Account( int initial_deposit )
{
    initial_deposit = 0;
}

int main()
{
    Acount ac(1);
}