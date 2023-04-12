/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:48:54 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/04/12 17:45:38 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <vector>
# include <deque>

class PmergeMe
{
	private:
		std::vector<int> PmergeMeVector;
		std::deque<int> PmergeMeDeque;
		float	vectorProcessTime;
		float	dequeProcessTime;
	public:
		bool 	checkArgument(int ac, char **arg);
		bool	mergeInsertionVector(int start, int end);
		bool	insertionVector(int start, int end);
		bool	mergeInsertionDeque(int start, int end);
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