/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:37:43 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/15 12:05:42 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<int>	table;
		unsigned int		N;
		unsigned int		n;
	public:
		Span();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();
		int		shortestSpan();
		int		longestSpan();
		void	addNumber(int	N);
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		Span 	&operator=( Span const & rhs );
		class NoSpaceLeft: public std::exception
		{
			const char *what() const throw();
		};
		class NoSpanCanBeFound: public std::exception
		{
			const char *what() const throw();
		};
};

#endif /* ************************************************************ SPAN_H */