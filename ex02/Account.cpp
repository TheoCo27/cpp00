/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:50:21 by tcohen            #+#    #+#             */
/*   Updated: 2025/02/03 05:20:07 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//static funbctiuns
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
	std::cout	<< "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;

	
}
//fin static
Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created" << std::endl;
}
Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed" << std::endl;
	if (_nbAccounts == 0)
	{
		_totalAmount = 0;
		_totalNbDeposits = 0;
		_totalNbWithdrawals = 0;
	}
	return ;
}

void Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout	<< "index:" << _accountIndex
			<< ";p_amount:" << withdrawal
			<< ";withdrawal:refused" << std::endl;
		return (1);

	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return (0);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;

}

void Account::_displayTimestamp(void) {
    // Obtenir le temps actuel
    std::time_t now = std::time(nullptr);
    std::tm *ltm = std::localtime(&now);

    // Afficher au format [YYYYMMDD_HHMMSS]
    std::cout << "[" 
              << 1900 + ltm->tm_year  // Année (tm_year commence à 1900)
              << (ltm->tm_mon + 1 < 10 ? "0" : "") << ltm->tm_mon + 1  // Mois (0-11)
              << (ltm->tm_mday < 10 ? "0" : "") << ltm->tm_mday       // Jour
              << "_"
              << (ltm->tm_hour < 10 ? "0" : "") << ltm->tm_hour       // Heures
              << (ltm->tm_min < 10 ? "0" : "") << ltm->tm_min         // Minutes
              << (ltm->tm_sec < 10 ? "0" : "") << ltm->tm_sec         // Secondes
              << "] ";
}

Account::Account( void )
{

}
