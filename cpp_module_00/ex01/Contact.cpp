/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:26:35 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/09/28 18:37:46 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	DisplayFirstRaw()
{
	std::cout << std::setw(10) << "index";
	std::cout << '|';
	std::cout << std::setw(10) << "FirstName";
	std::cout << '|';
	std::cout << std::setw(10) << "LastName";
	std::cout << '|';
	std::cout << std::setw(10) << "PhoneBook";
	std::cout << '|';
	std::cout << std::setw(10) << "Nickname";
	std::cout << std::endl;
}

void	Contact::Display(Contact ToDisplay)
{
	DisplayFirstRaw();
	std::cout << std::setw(10) << ToDisplay.index;
	std::cout << '|';
	if (ToDisplay.FirstName.length() <= 10)
		std::cout << std::setw(10) << ToDisplay.FirstName;
	else
		std::cout << std::setw(10) << ToDisplay.FirstName.substr(0, 9).append(".");
	std::cout << '|';
	if (ToDisplay.LastName.length() <= 10)
		std::cout << std::setw(10) << ToDisplay.LastName;
	else
		std::cout << std::setw(10) << ToDisplay.LastName.substr(0, 9).append(".");
	std::cout << '|';
	if (ToDisplay.PhoneNumber.length() <= 10)
		std::cout << std::setw(10) << ToDisplay.PhoneNumber;
	else
		std::cout << std::setw(10) << ToDisplay.PhoneNumber.substr(0, 9).append(".");
	std::cout << '|';
	if (ToDisplay.Nickname.length() <= 10)
		std::cout << std::setw(10) << ToDisplay.Nickname;
	else
		std::cout << std::setw(10) << ToDisplay.Nickname.substr(0, 9).append(".");
	std::cout << std::endl;
}

void	Contact::FillInfo(Contact *NewContact, int index)
{
	std::cout << "Enter you first name: ";
	std::cin >> NewContact->FirstName;
	if (NewContact->FirstName.empty())
		return ;
	std::cout << "\nEnter your last name: ";
	std::cin >> NewContact->LastName;
	if (NewContact->LastName.empty())
		return ;
	std::cout << "\nEnter your Nickname: ";
	std::cin >> NewContact->Nickname;
	if (NewContact->Nickname.empty())
		return ;
	std::cout << "\nEnter you phone number: ";
	std::cin >> NewContact->PhoneNumber;
	if (NewContact->PhoneNumber.empty())
		return ;
	std::cout << "\nnow tell me you darkest secret: ";
	std::cin >> NewContact->DarkestSecret;
	if (NewContact->DarkestSecret.empty())
		return ;
	NewContact->index = index;
	std::cout << index << std::endl;
	std::cout << "the contact have been added succesfully" << std::endl;
}