/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:14:17 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/09/27 15:58:49 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main (int ac, char **av)
{
	std::string	prompt;
	PhoneBook	MyPhoneBook;
	int			index;

	std::cout << "welecome to the 80's\n";
	std::cout << "this you phonebook\n";
	std::cout << "use ADD if you would like to add a contact" << std::endl;
	std::cout << "use SEARCH if you are looking for a specific contact" << std::endl;
	std::cout << "and if you wanna leave you can use EXIT" << std::endl;
	std::cin >> prompt;
	while (prompt.compare("EXIT"))
	{
		if (!prompt.compare("ADD"))
			MyPhoneBook.AddContact();
		else if (!prompt.compare("SEARCH"))
		{
			std::cout << "can you give me the index of the contact you're looking for";
			std::cin >> index;
			MyPhoneBook.Search(index);
		}
		else
			std::cout << "please read the instruction carefully !!!" << std::endl;
		std::cin >> prompt;
	}
	std::cout << "I wish you good day" << std::endl;
}