/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:57:31 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/04/11 15:27:44 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>

# include <map>

typedef std::map<std::string, float, std::greater<std::string> > exchMap;

class BitcoinExchange
{
	private:
		exchMap exchangeData;
	public:
		bool	parseInputFile(std::string fileName);
		bool	parseInputFileLines(std::string &line);
		bool	parseDataBaseFile();
		bool 	parseDataBaseLine(std::string &line);
		bool 	validDate(std::string &date);
		float	convertExchangeRate(std::string &exchangeRate);
		bool	checkValue(const char *str);
		void	printResult(float value, std::string &date);
		BitcoinExchange(std::string fileName);
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();
		BitcoinExchange &		operator=( BitcoinExchange const & rhs );
		class BadInputDataBase: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
		class BadInputFile: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
		class NegativeNumber: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
		class LargeNumber: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
};

#endif /* ************************************************* BITCOINEXCHANGE_H */