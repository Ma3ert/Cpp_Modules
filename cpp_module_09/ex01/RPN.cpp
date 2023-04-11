/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:42:30 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/04/11 17:42:18 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RPN::RPN(std::string rpn)
{
	try
	{
		parseExcuteRpn(rpn);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

RPN::RPN( const RPN & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RPN::~RPN()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RPN &				RPN::operator=( RPN const & rhs )
{
	if ( this != &rhs )
	{
		this->excutionStack = rhs.excutionStack;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool	RPN::excuteOperation(int firstOperand, int secondOperand, std::string &oper)
{
	int result;
	if (oper == "+")
	{
		result = firstOperand + secondOperand;
	}
	if (oper == "-")
	{
		result = firstOperand - secondOperand;
	}
	if (oper == "*")
	{
		result = firstOperand * secondOperand;
	}
	if (oper == "/")
	{
		if (secondOperand == 0)
			throw BadInput();
		result = firstOperand / secondOperand;
	}
	excutionStack.push(result);
	return (true);
}

bool RPN::excute(std::string &digOper)
{
	std::string	numbers = "1234567890";
	int	FirstOperand;
	int	SecondOperand;
	if (numbers.find(digOper) != std::string::npos)
		excutionStack.push(atoi(digOper.c_str()));
	else
	{
		if (excutionStack.size() < 2)
			throw BadInput();
		SecondOperand = excutionStack.top(); excutionStack.pop();
		FirstOperand = excutionStack.top(); excutionStack.pop();
		excuteOperation(FirstOperand, SecondOperand, digOper);
	}
	return (true);
}

bool	RPN::checkIfValid(std::string &digOper)
{
	std::string toFind = "1234567890/*+-";
	if (digOper.empty())
		return (false);
	if (digOper.length() != 1)
		throw BadInput();
	if (toFind.find(digOper) == std::string::npos)
		throw BadInput();
	return (true);
}

bool RPN::parseExcuteRpn(std::string &rpn)
{
	std::string	digOper;
	size_t start = 0;
	size_t pos = rpn.find(' ', start);
	rpn = rpn + ' ';
	while (pos != std::string::npos)
	{
		digOper = rpn.substr(start, pos - start);
		if (checkIfValid(digOper))
			excute(digOper);
		start = pos + 1;
		pos = rpn.find(' ', start);
	}
	if (excutionStack.size() != 1)
		throw BadInput();
	std::cout << "result: " << excutionStack.top() << std::endl;
	return (true);
}

char const *RPN::BadInput::what() const throw()
{
	return ("Error: BADE INPUT");
}

// char const *RPN::NotADigit::what() const throw()
// {
// 	return ("Error: INPUT IS NOT A DIGIT");
// }


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */