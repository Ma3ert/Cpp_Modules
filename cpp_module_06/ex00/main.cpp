/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:33:19 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/11 15:53:53 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	checkNumber(std::string arg)
{
	for (int i = 0; arg[i]; i++)
	{
		if (i == 0 && (arg[i] == '+' || arg[i] == '-'))
			i++;
		if (!isdigit(arg[i]))
			return (0);
	}
	return (1);
}

int checkExponent(std::string arg, int pos)
{
	std::string Exponent = arg.substr(0, pos);
	if (Exponent.empty())
		return (0);
	if (!checkNumber(Exponent))
		return (0);
	return (1);
}

int	checkMantissa(std::string arg, int pos, int dec)
{
	std::string mantissa = arg.substr(pos + 1, -1);
	if (mantissa.empty())
		return (0);
	if (dec == 1)
		mantissa.pop_back();
	if (mantissa[0] == '-' || mantissa[0] == '+')
		return (0);
	if (!checkNumber(mantissa))
		return (0);
	return (1);
}

int checkArg(std::string arg)
{
	size_t pos;
	int	dec = 0;

	if (checkNumber(arg))
		return (INT);
	if (arg.length() == 1)
		return (CHAR);
	pos = arg.find('.', 0);
	if (pos != std::string::npos)
	{
		if (!checkExponent(arg, pos))
			return (0);
		if (arg.back() == 'f')
			dec = 1;
		if (!checkMantissa(arg, pos, dec))
			return (0);
		if (dec == 1)
			return (FLOAT);
		return (DOUBLE);
	}
	return (0);
}

int	nanHundle(void)
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "double: nan" << std::endl;
	std::cout << "flaot: nanf" << std::endl;
	return (0);	
}

int	infHundle(void)
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "double: inf" << std::endl;
	std::cout << "flaot: inff" << std::endl;
	return (0);
}

int main(int ac, char **av)
{
	int dec;

	if (ac != 2)
	{
		std::cout << "Arg Error" << std::endl;
		return (1);
	}
	std::string	arg = av[1];
	if (arg == "nan" || arg == "nanf")
		return (nanHundle());
	if (arg == "-inf" || arg == "+inf" || arg == "-inff" || arg == "+inff"
		|| arg == "inf" || arg == "inff")
		return (infHundle());
	if ((dec = checkArg(arg)) && dec)
	{
		printFormat(arg, dec);
		return (0);
	}
	std::cout << "Invalid Arg" << std::endl;
}