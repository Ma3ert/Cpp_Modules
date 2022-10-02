/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:26:35 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/02 18:44:01 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	DisplayFirstRaw(int	type)
{
	std::cout << std::setw(10) << "index";
	std::cout << '|';
	std::cout << std::setw(10) << "FirstName";
	std::cout << '|';
	std::cout << std::setw(10) << "LastName";
	if (type)
	{
		std::cout << '|';
		std::cout << std::setw(10) << "PhoneBook";
	}
	std::cout << '|';
	std::cout << std::setw(10) << "Nickname";
	if (type)
	{
		std::cout << '|';
		std::cout << std::setw(10) << "YourSecret";
	}
	std::cout << std::endl;
}

void	Contact::DisplayLess(Contact ToDisplay)
{
	DisplayFirstRaw(0);
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
	if (ToDisplay.Nickname.length() <= 10)
		std::cout << std::setw(10) << ToDisplay.Nickname;
	else
		std::cout << std::setw(10) << ToDisplay.Nickname.substr(0, 9).append(".");
	std::cout << std::endl;
}

void	Contact::Display(Contact ToDisplay)
{
	DisplayFirstRaw(1);
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
	std::cout << '|';
	if (ToDisplay.DarkestSecret.length() <= 10)
		std::cout << std::setw(10) << ToDisplay.DarkestSecret;
	else
		std::cout << std::setw(10) << ToDisplay.DarkestSecret.substr(0, 9).append(".");
	std::cout << std::endl;
}

void	Contact::FillInfo(Contact *NewContact, int index)
{
	do
	{
		std::cout << "Enter you first name: ";
		getline(std::cin, NewContact->FirstName);
		if (std::cin.eof())
			return ;
	}	while (NewContact->FirstName.empty());
	do
	{	
		std::cout << "\nEnter your last name: ";
		getline(std::cin, NewContact->LastName);
		if (std::cin.eof())
			return ;
	}	while (NewContact->LastName.empty());
	do
	{	
		std::cout << "\nEnter your Nickname: ";
		getline(std::cin, NewContact->Nickname);
		if (std::cin.eof())
			return ;
	}	while (NewContact->Nickname.empty());
	do
	{
		std::cout << "\nEnter you phone number: ";
		getline(std::cin, NewContact->PhoneNumber);
		if (std::cin.eof())
			return ;
	}	while (NewContact->PhoneNumber.empty());
	do
	{
		std::cout << "\nnow tell me you darkest secret: ";
		getline(std::cin, NewContact->DarkestSecret);
		if (std::cin.eof())
			return ;
	}	while (NewContact->DarkestSecret.empty());
	NewContact->index = index;
	std::cout << "the contact have been added succesfully" << std::endl;
}