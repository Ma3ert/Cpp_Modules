/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:37:46 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/15 12:21:44 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int newN): table(newN), N(newN), n(0) {}

Span::Span(): N(0), n(0) {}

Span::Span( const Span & src ) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->table = rhs.table;
		this->N = rhs.N;
		this->n = rhs.n;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int	Span::shortestSpan()
{
	int span = INT_MAX;
	if (this->n <= 1)
		throw NoSpanCanBeFound();
	std::vector<int>::iterator end = table.end();
	std::vector<int>::iterator begin = table.begin();
	std::sort(begin, end);
	for (; begin + 1 != end; ++begin)
	{
		if (span > (*(begin + 1) - *begin))
			span = *(begin + 1) - *begin;
	}
	return (span);
}

int	Span::longestSpan()
{
	if (this->n <= 1)
		throw NoSpanCanBeFound();
	std::vector<int>::iterator end = table.end();
	std::vector<int>::iterator begin = table.begin();
	std::sort(begin, end);
	return (*(end - 1) - (*begin));
}

void	Span::addNumber(int	newElement)
{
	if (n == N)
		throw NoSpaceLeft();
	table[n] = newElement;
	n++;
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if ((end - begin) > (this->N - this->n))
		throw NoSpaceLeft();
	while (n != N && begin != end)
	{
		std::cout << "n " << *begin << std::endl;
		table[n] = *begin;
		++n;
		++begin;
	}
}

const char *Span::NoSpaceLeft::what() const throw()
{
	return ("NoSpaceLeft");
}

const char *Span::NoSpanCanBeFound::what() const throw()
{
	return ("NoSpanCanBeFound");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */