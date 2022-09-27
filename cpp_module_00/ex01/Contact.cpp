/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:26:35 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/09/27 15:57:40 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	Contact::Display(Contact ToDisplay)
{
	std::cout << ToDisplay.index;
	std::cout << '|';
	if (ToDisplay.FirstName.length() >= 10)
		std::cout << ToDisplay.FirstName.substr(0, 9) << '.';
	else
		std::cout << ToDisplay.FirstName;
	std::cout << '|';
	if (ToDisplay.LastName.length() >= 10)
		std::cout << ToDisplay.LastName.substr(0, 9) << '.';
	else
		std::cout << ToDisplay.LastName;
	std::cout << '|';
	if (ToDisplay.PhoneNumber.length() >= 10)
		std::cout << ToDisplay.PhoneNumber.substr(0, 9) << '.';
	else
		std::cout << ToDisplay.PhoneNumber;
	std::cout << '|';
	if (ToDisplay.Nickname.length() >= 10)
		std::cout << ToDisplay.Nickname.substr(0, 9) << '.';
	else
		std::cout << ToDisplay.Nickname;
}

void	Contact::FillInfo(Contact *NewContact, int index)
{
	std::cout << "Enter you first name: ";
	std::cin >> NewContact->FirstName;
	std::cout << "\nEnter your last name: ";
	std::cin >> NewContact->LastName;
	std::cout << "\nEnter your Nickname: ";
	std::cin >> NewContact->Nickname;
	std::cout << "\nEnter you phone number: ";
	std::cin >> NewContact->PhoneNumber;
	std::cout << "\nnow tell me you darkest secret: ";
	std::cin >> NewContact->DarkestSecret;
	NewContact->index = index;
	std::cout << index << std::endl;
	std::cout << "the contact have been added succesfully" << std::endl;
}