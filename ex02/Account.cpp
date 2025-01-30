/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:50:21 by tcohen            #+#    #+#             */
/*   Updated: 2025/01/30 18:30:47 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

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
	
}
//fin static
Account::Account( int initial_deposit )
{

}
Account::~Account( void )
{
	
}

void Account::makeDeposit( int deposit )
{
	_nbDeposits += deposit;
	_totalNbDeposits += deposit;
}
bool	Account::makeWithdrawal( int withdrawal )
{

}

int		Account::checkAmount( void ) const
{

}
void	Account::displayStatus( void ) const
{

}
//private 
//static
void	Account::_displayTimestamp( void )
{

}
Account::Account( void )
{

}
