/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:48:54 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/04/13 16:59:19 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <vector>
# include <deque>
# include <time.h>
# include <sys/time.h>
#include <iomanip>

class PmergeMe
{
	private:
		std::vector<int> PmergeMeVector;
		std::deque<int> PmergeMeDeque;
		double	vectorParseTime;
		double	dequeParseTime;
		double	vectorSortTime;
		double	dequeSortTime;
	public:
		bool 	checkArgument(int ac, char **arg);
		void	mergeInsertionVector(int start, int end);
		void	insertionVector(int start, int end);
		void	mergeVector(int start, int middle, int end);
		void	mergeInsertionDeque(int start, int end);
		void	insertionDeque(int start, int end);
		void	mergeDeque(int start, int middle, int end);
		double	getTime(void);
		PmergeMe(int ac, char **arg);
		PmergeMe( PmergeMe const & src );
		~PmergeMe();
		PmergeMe &		operator=( PmergeMe const & rhs );
		class BadInput: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
};

#endif /* ******************************************************** PMERGEME_H */