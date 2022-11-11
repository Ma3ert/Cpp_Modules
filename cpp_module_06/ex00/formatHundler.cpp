/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatHundler.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:59:50 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/11 11:25:02 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

double strToDouble(std::string arg)
{
	std::stringstream	ss;
	double				result;
	ss << arg;
	ss >> result;
	return (result);
}

long strToInt(std::string arg)
{
	std::stringstream	ss;
	long					result;
	ss << arg;
	ss >> result;
	return (result);
}

int strToChar(std::string arg)
{
	std::stringstream	ss;
	char				result;
	ss << arg;
	ss >> result;
	return (result);
}

float strToFloat(std::string arg)
{
	std::stringstream	ss;
	float				result;
	arg.pop_back();
	ss << arg;
	ss >> result;
	return (result);
}

void	fromInt(long	input)
{
	float	floatValue;
	char	charValue = 0;
	double	doubleValue;

	if (input < CHAR_MAX && input > CHAR_MIN)
	{	
		charValue = static_cast<char>(input);
		if (isprint(charValue))
			std::cout << "char: '" << charValue << "'" << std::endl;
		else
			std::cout << "char: Not Displayable\n";
	}
	else
		std::cout << "char: Impossible" << std::endl;
	floatValue = static_cast<float>(input);
	doubleValue = static_cast<double>(input);
	std::cout << "double: " << std::fixed << doubleValue << std::endl;
	std::cout << "flaot: " << std::fixed << floatValue << "f" << std::endl;
	if (input > INT_MAX || input < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << input << std::endl;
}

void	fromFloat(float input)
{
	int		intValue = 0;
	char	charValue = 0;

	intValue = static_cast<int>(input);
	std::cout << "int: " << intValue << std::endl;

	double	doubleValue = static_cast<double>(input);
	std::cout << "double: " << std::fixed << doubleValue << std::endl;
	
	if (input < CHAR_MAX && input > CHAR_MIN)
	{
		charValue = static_cast<char>(input);
		if (isprint(charValue))
			std::cout << "char: '" << charValue << "'" << std::endl;
		else
			std::cout << "char: Not displayable\n";
	}
	else
		std::cout << "char: Impossible" << std::endl;
	std::cout << "float: " << std::fixed << input << "f" << std::endl;
}

void	fromDouble(double input)
{
	float	floatValue = 0.0;
	char	charValue = 0;
	int		intValue = 0;

	if (input < INT_MAX && input > INT_MIN)
	{
		intValue = static_cast<int>(input);
		std::cout << "int: " << intValue << std::endl;
	}
	else
		std::cout << "int: Impossible" << std::endl;

	if (input < CHAR_MAX && input > CHAR_MIN)
	{
		charValue = static_cast<char>(input);
		if (isprint(charValue))
			std::cout << "char: '" << charValue << "'" << std::endl;
		else
			std::cout << "char: Not displayable\n";
	}
	else
		std::cout << "char: Impossible" << std::endl;
	
	if (input < INT_MAX && input > INT_MIN)
	{
		floatValue = static_cast<float>(input);
		std::cout << "float: " << std::fixed << floatValue << "f" << std::endl;
	}
	else
		std::cout << "float: Impossible" << std::endl;
	std::cout << "double: " << std::fixed << input << std::endl;
}

void	fromChar(char input)
{
	int		intValue = static_cast<int>(input);
	double	doubleValue = static_cast<double>(input);
	float	floatValue = static_cast<float>(input);

	std::cout << "int: " << intValue << std::endl;
	std::cout << "float: " << std::fixed << floatValue << "f" << std::endl;
	std::cout << "double: " << std::fixed << doubleValue << std::endl;
	std::cout << "char: '" << input << "'\n";
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