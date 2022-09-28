/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:14:17 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/09/28 18:40:52 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

std::string	prompt_geter()
{
	std::string prompt;	

	std::cout << "ich tbi: ";
	std::cin >> prompt;
	return (prompt);
}

int main (int ac, char **av)
{
	int			index;
	std::string	prompt;
	PhoneBook	MyPhoneBook;
	std::string	index_char;

	std::cout << "welecome to the 80's\n";
	std::cout << "this is a phonebook\n";
	std::cout << "use ADD if you would like to add a contact" << std::endl;
	std::cout << "use SEARCH if you are looking for a specific contact" << std::endl;
	std::cout << "and if you wanna leave you can use EXIT" << std::endl;
	prompt = prompt_geter();
	while (prompt.compare("EXIT") && !prompt.empty())
	{
		if (!prompt.compare("ADD"))
			MyPhoneBook.AddContact();
		else if (!prompt.compare("SEARCH"))
		{
			std::cout << "can you give me the index of\nthe contact you're looking for: ";
			std::cin >> index_char;
			if (index_char.empty())
				break ;
			index = atoi(index_char.c_str());
			MyPhoneBook.Search(index);
		}
		else
			std::cout << "please read the instruction carefully !!!" << std::endl;
		prompt = prompt_geter();
	}
	std::cout << "\nI wish you a good day" << std::endl;
}