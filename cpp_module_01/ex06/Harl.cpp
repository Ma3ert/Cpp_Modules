/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:09:34 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/05 15:45:20 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.h"

std::string	Harl::availableLevel(int i)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	return (levels[i++]);
}

void Harl::debug( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "DEBUG MESSAGE !!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "INFO MESSAGE !!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "WARNING MESSAGE !!" << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "ERROR MESSAGE !!"	<< std::endl;
}

void Harl::complain( std::string level )
{
	int			index = 0;
	std::string	lvl;
	funPtr		funPtrs[4] =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	lvl = availableLevel(index);
	while (index < 4 && lvl.compare(level))
	{
		index++;
		lvl = availableLevel(index);
	}
	switch (index)
	{
		case 0:
			(this->*funPtrs[index++])();
		case 1:
			(this->*funPtrs[index++])();
		case 2:
			(this->*funPtrs[index++])();
		case 3:
			(this->*funPtrs[index++])();
			break;
		default:
			std::cout << "WOWOW CHECK YOU INPUT !!" << std::endl;
			break;
	}
}