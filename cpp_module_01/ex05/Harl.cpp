/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:09:34 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/04 19:01:57 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.h"

void Harl::debug( void )
{
	std::cout << "DEBUG MESSAGE !!" << std::endl;
}
void Harl::info( void )
{
	std::cout << "INFO MESSAGE !!" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "WARNING MESSAGE !!" << std::endl;
}
void Harl::error( void )
{
	std::cout << "ERROR MESSAGE !!"	<< std::endl;
}

void Harl::complain( std::string level )
{
	int		index;
	funPtr	funPtrs[4];

	funPtrs[0] = &Harl::debug;
	funPtrs[1] = &Harl::info;
	funPtrs[2] = &Harl::warning;
	funPtrs[3] = &Harl::error;
}