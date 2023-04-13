/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:48:50 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/04/13 17:16:27 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PmergeMe::PmergeMe(int ac, char **arg)
{
	try
	{
		checkArgument(ac, arg);
		vectorSortTime = getTime();
		mergeInsertionVector(0, PmergeMeVector.size() - 1);
		vectorSortTime = getTime() - vectorSortTime;
		dequeSortTime = getTime();
		mergeInsertionDeque(0, PmergeMeDeque.size() - 1);
		dequeSortTime = getTime() - dequeSortTime;
		std::cout << "Before: ";
		for (int j = 0; j < ac; j++)
		{
			std::cout << arg[j] << " ";
		}
		std::cout << "\nAfter:  ";
		for (size_t i = 0; i < PmergeMeVector.size(); i++)
		{
			std::cout << PmergeMeVector[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Time to process a range of " << PmergeMeVector.size();
		std::cout << " elements with std::vector : " << std::setprecision(5) << std::fixed << (double)(vectorParseTime + vectorSortTime) * 1000000.00 << " us\n";
		std::cout << "Time to process a range of " << PmergeMeDeque.size();
		std::cout << " elements with std::deque : " << std::setprecision(5) << std::fixed << (double)(dequeParseTime + dequeSortTime) * 1000000.00 << " us\n";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

PmergeMe::PmergeMe( const PmergeMe & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PmergeMe::~PmergeMe()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PmergeMe &				PmergeMe::operator=( PmergeMe const & rhs )
{
	if ( this != &rhs )
	{
		this->PmergeMeDeque = rhs.PmergeMeDeque;
		this->PmergeMeVector = rhs.PmergeMeVector;
		this->vectorParseTime = rhs.vectorParseTime;
		this->vectorParseTime = rhs.vectorParseTime;
		this->dequeParseTime = rhs.dequeParseTime;
		this->dequeSortTime = rhs.dequeSortTime;
		this->dequeSortTime = rhs.dequeSortTime;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PmergeMe::insertionVector(int start, int end)
{
	for (int i = start + 1; i <= end; i++)
	{
		int	toSwap = PmergeMeVector[i];
		int j = i - 1;
		for (; j >= start; j--)
		{
			if (PmergeMeVector[j] <= toSwap)
				break ;
			PmergeMeVector[j + 1] = PmergeMeVector[j];
		}
		PmergeMeVector[j + 1] = toSwap;
	}
}

void	PmergeMe::mergeVector(int start, int middle, int end)
{
	int i = start;
	int j = middle + 1;
	int	tempPosition = start;
	std::vector<int>	tempVector;
	while (i <= middle && j <= end)
	{
		if (PmergeMeVector[i] <= PmergeMeVector[j])
			tempVector.push_back(PmergeMeVector[i++]);
		else
			tempVector.push_back(PmergeMeVector[j++]);
	}
	while (i <= middle)
		tempVector.push_back(PmergeMeVector[i++]);
	while (j <= end)
		tempVector.push_back(PmergeMeVector[j++]);
	for (tempPosition = 0; tempPosition + start <= end; tempPosition++)
		PmergeMeVector[tempPosition + start] = tempVector[tempPosition];
}

void	PmergeMe::mergeInsertionVector(int start, int end)
{
	if (end - start > 2)
	{
		int middle = (end + start) / 2;
		mergeInsertionVector(start, middle);
		mergeInsertionVector(middle + 1, end);
		mergeVector(start, middle, end);
	}
	else
		insertionVector(start, end);
}

void	PmergeMe::insertionDeque(int start, int end)
{
	for (int i = start + 1; i <= end; i++)
	{
		int	toSwap = PmergeMeDeque[i];
		int j = i - 1;
		for (; j >= start; j--)
		{
			if (PmergeMeDeque[j] <= toSwap)
				break ;
			PmergeMeDeque[j + 1] = PmergeMeDeque[j];
		}
		PmergeMeDeque[j + 1] = toSwap;
	}
}

void	PmergeMe::mergeDeque(int start, int middle, int end)
{
	int i = start;
	int j = middle + 1;
	int	tempPosition = start;
	std::deque<int>	tempDeque;
	while (i <= middle && j <= end)
	{
		if (PmergeMeDeque[i] <= PmergeMeDeque[j])
			tempDeque.push_back(PmergeMeDeque[i++]);
		else
			tempDeque.push_back(PmergeMeDeque[j++]);
	}
	while (i <= middle)
		tempDeque.push_back(PmergeMeDeque[i++]);
	while (j <= end)
		tempDeque.push_back(PmergeMeDeque[j++]);
	for (tempPosition = 0; tempPosition + start <= end; tempPosition++)
		PmergeMeDeque[tempPosition + start] = tempDeque[tempPosition];
}

void	PmergeMe::mergeInsertionDeque(int start, int end)
{
	if (end - start > 2)
	{
		int middle = (end + start) / 2;
		mergeInsertionDeque(start, middle);
		mergeInsertionDeque(middle + 1, end);
		mergeDeque(start, middle, end);
	}
	else
		insertionDeque(start, end);
}

bool	checkString(const char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

double	PmergeMe::getTime(void)
{
	struct timeval	now;

	gettimeofday(&now, NULL);
	return ((double)(now.tv_usec / 1000000.0) + (double)(now.tv_sec));
}

bool	PmergeMe::checkArgument(int ac, char **arg)
{
	int i = 0;
	while (i < ac)
	{
		if (!checkString(arg[i]))
			throw BadInput();
		i++;
	}
	dequeParseTime = getTime();
	for (i = 0; i < ac; ++i)
		PmergeMeDeque.push_back(atoi(arg[i]));
	dequeParseTime = getTime() - dequeParseTime;
	vectorParseTime = getTime();
	for (i = 0; i < ac; ++i)
		PmergeMeVector.push_back(atoi(arg[i]));
	vectorParseTime = getTime() - vectorParseTime;
	return (true);
}

char const *PmergeMe::BadInput::what() const throw()
{
	return ("Error: BADE INPUT");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */