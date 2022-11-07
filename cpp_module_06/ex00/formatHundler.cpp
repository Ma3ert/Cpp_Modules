/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatHundler.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:59:50 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/07 17:12:13 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

double toDouble(std::string arg)
{
	std::stringstream	str;
	int					exponentValue;
	int					mantisaValue;
	double 				result;
	int pos = arg.find('.', 0);
	std::string exponent = arg.substr(pos + 1, -1);
	std::string mantisa = arg.substr(0, pos);

	str << exponent;
	str >> exponentValue;
	str << mantisa;
	str >> mantisaValue;
	result = (double)exponentValue + (double)mantisaValue / pow(10, mantisa.length());
	return (result);
}

float toFloat(std::string arg)
{
	std::stringstream	str;
	int					exponentValue;
	int					mantisaValue;
	float 				result;
	int pos = arg.find('.', 0);
	std::string exponent = arg.substr(pos + 1, -1);
	std::string mantisa = arg.substr(0, pos);
	mantisa.pop_back();

	str << exponent;
	str >> exponentValue;
	str << mantisa;
	str >> mantisaValue;
	result = (float)exponentValue + (float)mantisaValue / pow(10, mantisa.length());
	return (result);
}

bool check_range(std::string arg, char from, char to)
{
	
}

void	printFormat(std::string arg, int dec)
{
	if (dec == INT)
	{
		std::stringstream	str;
		int					value;
		str << arg;
		str >> value;
	}		
	if (dec == FLOAT)
	{
	}
	if (dec == DOUBLE)
	{
	}
	if (dec == CHAR)
	{
	}
}
