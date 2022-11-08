/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatHundler.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:59:50 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/08 15:16:11 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

double strToDouble(std::string arg)
{
	std::stringstream	str;
	double				result;
	str << arg;
	str >> result;
	return (result);
}

int strToInt(std::string arg)
{
	std::stringstream	str;
	int				result;
	str << arg;
	str >> result;
	return (result);
}

int strToChar(std::string arg)
{
	std::stringstream	str;
	int				result;
	str << arg;
	str >> result;
	return (result);
}

float strToFloat(std::string arg)
{
	std::stringstream	str;
	float				result;
	str << arg;
	str >> result;
	return (result);
}

bool checkRange(std::string arg, char from, char to)
{
}

void	fromInt(int	input)
{
	int		dec;
	int		floatValue;
	char	charValue;
	double	doubleValue;

	floatValue = static_cast<float>(input);
	if (input < CHAR_MAX && input > CHAR_MIN)
		charValue = static_cast<char>(input);
	else
		std::cout << "char: Impossible" << std::endl;
	doubleValue = static_cast<double>(input);
}

void	fromFloat(float input)
{
	int		intValue;
	char	charValue;

	intValue = static_cast<int>(input);
	double	doubleValue = static_cast<double>(input);
	std::cout << "double: " << doubleValue << std::endl;
	if (input < CHAR_MAX && input > CHAR_MIN)
		charValue = static_cast<char>(input);
		std::cout << "char: " << charValue << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;
	std::cout << "int: " << intValue << std::endl;
}

void	fromDouble(double input)
{
	float	floatValue;
	char	charValue;
	int		intValue;

	if (input < INT_MAX && input > INT_MIN)
		intValue = static_cast<int>(input);
		std::cout << "int: " << intValue << std::endl;
	else
		std::cout << "int: Impossible" << std::endl;
	if (input < CHAR_MAX && input > CHAR_MIN)
		charValue = static_cast<char>(input);
		std::cout << "int: " << intValue << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;
	if (input < INT_MAX && input > INT_MIN)
		floatValue = static_cast<float>(input);
		std::cout << "float: " << floatValue << std::endl;
	else
		std::cout << "float: Impossible" << std::endl;
}

void	fromChar(char input)
{
	int		intValue = static_cast<int>(input);
	double	doubleValue = static_cast<double>(input);
	float	floatValue = static_cast<float>(input);

	std::cout << "int: " << intValue << std::endl;
	std::cout << "float: " << floatValue << std::endl;
	std::cout << "double: " << doubleValue << std::endl;
}


void	printFormat(std::string arg, int dec)
{
	if (dec == INT)
		fromInt(strToInt(arg));
	if (dec == FLOAT)
		fromFloat(strToFloat(arg));
	if (dec == DOUBLE)
		fromDouble(strToDouble(arg));
	if (dec == CHAR)
		fromChar(strToChar(arg));
}