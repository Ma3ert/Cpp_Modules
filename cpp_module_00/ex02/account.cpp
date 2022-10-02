/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:29:48 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/02 16:04:52 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

bool	Account::makeWithdrawal(int wihtdrawal)
{
	_displayTimestamp();
	if (_amount < wihtdrawal)
	{	
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_nbWithdrawals += 1;
		_totalAmount -= wihtdrawal;
		_totalNbWithdrawals += 1;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
		_amount -= wihtdrawal;
		std::cout << ";withdrawal:" << wihtdrawal << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return (true);
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount ;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t t ;
    struct tm *tmp ;
	char MY_TIME[20];

	time(&t);
	tmp = localtime( &t );
	std::strftime(MY_TIME, 20, "[%Y%m%d_%H%M%S]", tmp);
	std::cout << MY_TIME << ' ';
}

Account::Account(int initial_deposit )
{
	static int	index;

	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	_accountIndex = index++;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";closed" << std::endl;
}