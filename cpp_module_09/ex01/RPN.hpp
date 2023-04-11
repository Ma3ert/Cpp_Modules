/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:42:28 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/04/11 17:10:51 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class RPN
{
	private:
		std::stack<int> excutionStack;
	public:
		bool	parseExcuteRpn(std::string &rpn);
		bool	checkIfValid(std::string &digOper);
		bool	excute(std::string &digOper);
		bool	excuteOperation(int fistOperand, int secondOperand, std::string &oper);
		RPN(std::string rpn);
		RPN( RPN const & src );
		~RPN();
		RPN &		operator=( RPN const & rhs );
		class BadInput: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
};


#endif /* ************************************************************* RPN_H */