/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acount.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:53:49 by aankote           #+#    #+#             */
/*   Updated: 2023/08/24 20:47:45 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Acount.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
Account::Account( int initial_deposit )
{
        this->_accountIndex = getNbAccounts();
        _nbAccounts ++;
        this->_amount = initial_deposit;
        _totalAmount += initial_deposit;
        _totalNbDeposits ++;
        
        std::cout << "index:";
        std::cout <<  _accountIndex;
        std::cout << ";amount:";
        std::cout  << initial_deposit << ";created\n";
        
}

void getDate()
{
        char formatteddate[9];
        char formattedtime[7];
        
        std::time_t currentTime = std::time(NULL);
        std::tm* timeInfo = std::localtime(&currentTime);
        std::strftime(formatteddate, sizeof(formatteddate), "%Y%d%m", timeInfo);
        std::strftime(formattedtime, sizeof(formattedtime), "%H%M%S", timeInfo);
        std::cout << "[" << formatteddate << "_";
        std::cout << formattedtime << "] ";
}

Account::~Account( void )
{
        getDate();
        std::cout << "index:";
        std::cout <<  _accountIndex;
        std::cout << ";amount:";
        std::cout  << _amount << ";closed\n";
}

void	Account::makeDeposit( int deposit )
{
    this->_totalNbDeposits ++;
    this->_nbDeposits ++;
    this->_amount += deposit; 
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
    return (_totalNbDeposits);
}
  
int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    getDate();
    std::cout << "acounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:";
    std::cout << Account::getNbDeposits();
    std::cout << ";withdrawals:";
    std::cout << Account::getNbWithdrawals() << std::endl;
}

int main()
{

    Account ac(1);
    Account ac1(10);
    Account ac2(14);
    Account::displayAccountsInfos();
    
}
