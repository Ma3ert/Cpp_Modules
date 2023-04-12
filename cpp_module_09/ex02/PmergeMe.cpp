/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:48:50 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/04/12 18:03:24 by Ma3ert           ###   ########.fr       */
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
		mergeInsertionVector(0, PmergeMeVector.size() - 1);
		mergeInsertionDeque(0, PmergeMeDeque.size() - 1);
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
		this->vectorProcessTime = rhs.vectorProcessTime;
		this->dequeProcessTime = rhs.dequeProcessTime;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool	PmergeMe::insertionVector(int start, int end)
{
	for (int i = start + 1; i <= end; i++)
	{
		int	toSwap = PmergeMeVector[i];
		int j;
		for (j = i - 1; j <= start; j--)
		{
			if (PmergeMeVector[j] <= toSwap)
				break ;
			PmergeMeVector[j + 1] = PmergeMeVector[j];
		}
		PmergeMeVector[j + 1] = toSwap;
	}
	return (true);
}

bool	PmergeMe::mergeInsertionVector(int start, int end)
{
	if (end - start < 2)
	{
		int middle = (end + start) / 2;
		mergeInsertionVector(start, middle);
		mergeInsertionVector(middle + 1, end);
	}
	else
		insertionVector(start, end);
}

bool	PmergeMe::mergeInsertionDeque(int start, int end)
{
	
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

bool	PmergeMe::checkArgument(int ac, char **arg)
{
	int i = 0;
	while (i < ac)
	{
		if (!checkString(arg[i]))
			throw BadInput();
		PmergeMeDeque.push_back(atoi(arg[i]));
		PmergeMeVector.push_back(atoi(arg[i]));
		i++;
	}
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