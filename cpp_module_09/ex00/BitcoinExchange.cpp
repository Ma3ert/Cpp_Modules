/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:57:33 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/04/10 17:43:40 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange(std::string fileName)
{
	std::cout << fileName << std::endl;
	if (!parseDataBaseFile())
		throw BadInputDataBase();
	try
	{
		if (!parseInputFile(fileName))
			throw BadInputFile();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange &				BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
	if ( this != &rhs )
	{
		this->exchangeData = rhs.exchangeData;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool parseFirstLine(std::string &line)
{
	size_t pos = line.find(" | ");
	if (pos == std::string::npos)
		return (false);
	std::string date = line.substr(0, pos);
	std::string value = line.substr(pos + 3, std::string::npos);
	if (date != "date" || value != "value")
		return (false);
	return (true);
}

bool	checkString(const char *str)
{
	bool point = false;
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			if (str[i] == '.' && !point)
				point = true;
			else
				return (false);
		}
	}
	return (true);
}

void	BitcoinExchange::printResult(float value, std::string &date)
{
	exchMap::iterator it = exchangeData.lower_bound(date);
	std::cout << date << " => " << value << " = " << (float)(value * (*it).second) << std::endl;
}

bool BitcoinExchange::parseInputFileLines(std::string &line)
{
	std::stringstream	ss;
	float				valueFloat;
	size_t pos = line.find(" | ");
	if (pos == std::string::npos)
		return (false);
	std::string date = line.substr(0, pos);
	std::string value = line.substr(pos + 3, std::string::npos);
	if (!validDate(date) || !checkString(value.c_str()))
		return (false);
	ss << value;
	ss >> valueFloat;
	if (valueFloat < 0.0f)
		throw NegativeNumber();
	if (valueFloat > 1000.0f)
		throw LargeNumber();
	printResult(valueFloat, date);
	return (true);
}

bool	BitcoinExchange::parseInputFile(std::string fileName)
{
	std::string line;
	std::ifstream inputFile(fileName);

	if (!inputFile.is_open())
		return (false);
	getline(inputFile, line);
	if (!parseFirstLine(line))
		return (false);
	while (!inputFile.eof())
	{
		getline(inputFile, line);
		if (!parseInputFileLines(line))
			return (false);
	}
	return (true);
}


bool BitcoinExchange::validDate(std::string &date)
{
	size_t pos = date.find('-', 0);
	size_t secondPos = date.find_last_of('-');
	if (pos == secondPos)
		return (false);
	std::string year = date.substr(0, pos);
	std::string month = date.substr(pos + 1, secondPos - pos - 1);
	std::string day = date.substr(secondPos + 1, std::string::npos);
	if (!checkString(year.c_str()) || !checkString(month.c_str()) || !checkString(day.c_str()))
		return (false);
	if (atoi(month.c_str()) > 12 || atoi(month.c_str()) > 31)
		return (false);
	return (true);
}

bool validExchangeRate(std::string &exchangeRate)
{
	if (!checkString(exchangeRate.c_str()))
		return (false);
	return (true);
}

float	BitcoinExchange::convertExchangeRate(std::string &exchangeRate)
{
	std::stringstream	ss;
	float				toReturn;

	ss << exchangeRate;
	ss >> toReturn;
	return (toReturn);
}

bool BitcoinExchange::parseDataBaseLine(std::string &line)
{
	size_t	pos = line.find(',', 0);
	// std::cout << line << std::endl;
	if (pos == std::string::npos)
		return (false);
	std::string date = line.substr(0, pos);
	std::string	exchangeRate = line.substr(pos + 1, std::string::npos);
	if (!validDate(date) || !validExchangeRate(exchangeRate))
		return (false);
	exchangeData[date] = convertExchangeRate(exchangeRate);
	return (true);
}

bool	BitcoinExchange::parseDataBaseFile()
{
	std::string line;
	std::ifstream dataBase("./data.csv");

	if (!dataBase.is_open())
		return (false);
	getline(dataBase, line);
	while (!dataBase.eof())
	{
		getline(dataBase, line);
		
		if (!parseDataBaseLine(line))
			return (false);
	}
	return (true);
}

char const *BitcoinExchange::BadInputDataBase::what() const throw()
{
	return ("Error: BAD INPUT DATABASE ERROR");
}

char const *BitcoinExchange::BadInputFile::what() const throw()
{
	return ("Error: BADE INPUT FILE");
}
char const *BitcoinExchange::NegativeNumber::what() const throw()
{
	return ("Error: not a positve number\n");
}
char const *BitcoinExchange::LargeNumber::what() const throw()
{
	return ("Error: too large a number.");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */