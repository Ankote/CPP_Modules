/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acount.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <aankote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:53:49 by aankote           #+#    #+#             */
/*   Updated: 2023/08/25 19:26:27 by aankote          ###   ########.fr       */
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
    this->_nbWithdrawals = 0 ;
    this->_nbDeposits = 0 ;
    this->_amount = initial_deposit;
    _nbAccounts ++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:";
    std::cout <<  _accountIndex;
    std::cout << ";amount:";
    std::cout  << initial_deposit << ";created\n";
        
}

void	Account::_displayTimestamp( void )
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
        _displayTimestamp();
        std::cout << "index:";
        std::cout <<  _accountIndex;
        std::cout << ";amount:";
        std::cout  << _amount << ";closed\n";
}

void	Account::makeDeposit( int deposit )
{
    this->_nbDeposits ++;
    _totalNbDeposits ++;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    std::cout << ";deposit:" << deposit;
    this->_amount += deposit;
    std::cout <<";amount:" << this->_amount;
    std::cout << ";nb_deposits:" << this->_nbDeposits;
    std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (this->_amount < withdrawal)
    {
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex;
        std::cout << ";p_amount:" << this->_amount;
        std::cout << ";withdrawal:" << "refused";
        std::cout << std::endl;
        return (0);
    }
    this->_nbWithdrawals ++;
    _totalNbWithdrawals ++;
    _totalAmount -= withdrawal;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    std::cout << ";withdrawal:" << withdrawal;
    this->_amount -= withdrawal;
    std::cout <<";amount:" << this->_amount;
    std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
    return (1);
}

int Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
    
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
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:";
    std::cout << Account::getNbDeposits();
    std::cout << ";withdrawals:";
    std::cout << Account::getNbWithdrawals() << std::endl;
}
