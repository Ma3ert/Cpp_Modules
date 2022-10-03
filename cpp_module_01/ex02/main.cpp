/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:40:31 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/03 15:59:59 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "=======YOUR ADDRESSES======" << std::endl;
	std::cout << "your str address: " << &str << std::endl;
	std::cout << "your ptr address: " << &stringPTR << std::endl;
	std::cout << "your ref address: " << &stringREF << std::endl;

	std::cout << "=======VALUES========" << std::endl;
	std::cout << "your str: " << str << std::endl;
	std::cout << "your ptr: " << *stringPTR << std::endl;
	std::cout << "your ref: " << stringREF << std::endl;
}