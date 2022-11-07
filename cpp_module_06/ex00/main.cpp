/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:33:19 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/07 17:18:09 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	checkNumber(std::string arg)
{
	for (int i = 0; arg[i]; i++)
	{
		if (!isdigit(arg[i]))
			return (0);
	}
	return (1);
}

int checkExponent(std::string arg, int pos)
{
	std::string Exponent = arg.substr(0, pos);
	if (!checkNumber(Exponent))
		return (0);
	return (1);
}

int	checkMantissa(std::string arg, int pos, int dec)
{
	std::string mantissa = arg.substr(pos + 1, -1);
	if (dec == 1)
		mantissa.pop_back();
	if (!checkNumber(mantissa))
		return (0);
	return (1);
}

int checkArg(std::string arg)
{
	size_t pos;
	int	dec = 0;

	if (arg.length() == 1 && isalpha(arg[0]))
		return (CHAR);
	if (checkNumber(arg))
		return (INT);
	pos = arg.find('.', 0);
	if (pos != std::string::npos)
	{
		if (!checkExponent(arg, pos))
			return (0);
		if (arg.back() == FLOAT)
			dec = 1;
		if (!checkMantissa(arg, pos, dec))
			return (0);
		if (dec == 1)
			return (FLOAT);
		return (DOUBLE);
	}
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
	if ((dec = checkArg(arg)) && dec)
	{
		printFormat(arg, dec);
		return (0);
	}
	std::cout << "Invalid Arg";
}