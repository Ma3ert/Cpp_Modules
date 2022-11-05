/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:33:19 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/05 13:43:04 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	checkNumber(std::string arg)
{
	for (int i = 0; arg[i]; i++)
	{
		if (!isdigit(arg[i]))
			return (0);
	}
	return (1);
}

int checkMantisa(std::string arg, int pos)
{
	std::string mantisa = arg.substr(0, pos);
	if (!checkNumber(mantisa))
		return (0);
	return (1);
}

int	checkExponent(std::string arg, int pos, int dec)
{
	std::string exponent = arg.substr(pos, pos - arg.length() - dec);
	if (!checkNumber(mantisa))
		return (0);
	return (1);
}

int checkArg(std::string arg)
{
	int pos;
	int	dec = 0;
	if (pos = arg.find('.', 0))	
	{
		if (!checkMantisa(arg, pos))
			return (0);
		if (arg.back() == 'f')
			dec += 1;
		if (!checkExponent(arg, pos, dec))
			return (0);
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		error:
		return (1);
	}
	std::string	arg = av[1];
	int pos;
	if (checkArg(arg))
}