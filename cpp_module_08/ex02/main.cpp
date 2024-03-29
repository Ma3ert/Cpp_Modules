/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:57:20 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/01/21 20:54:33 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
int main()
{
	MutantStack<int> Mstack;
	Mstack.push(5);
	Mstack.push(17);
	std::cout << "top: " << Mstack.top() << std::endl;
	Mstack.pop();
	std::cout << "size: " << Mstack.size() << std::endl;
	Mstack.push(3);
	Mstack.push(5);
	Mstack.push(737);
	Mstack.push(0);
	MutantStack<int>::iterator it = Mstack.begin();
	MutantStack<int>::iterator ite = Mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(Mstack);
	return 0;
}