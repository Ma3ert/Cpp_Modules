/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:26:33 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/02 11:31:22 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	PhoneBook::n = 0;

int	PhoneBook::DisplayAvailabelContact()
{
	int	i = 0;
	if (n == 0)
	{
		std::cout << "NO CONTACT AVAILABLE !! TRY TO ADD ONE" << std::endl;
		return 0;
	}
	std::cout << std::endl;
	while (i < n)
	{
		Contacts[i].DisplayLess(Contacts[i]);
		i++;
	}
	return (1);
}

void PhoneBook::Search(int index)
{
	if (index < n)
		Contacts[index].Display(Contacts[index]);
	else
		std::cout << "\ncan you please check the input !?\n";
}

void	PhoneBook::AddContact()
{
	static int i;

	if (n < 8)
		n++;
	if (i == 8)
		i = 0;
	Contacts[i].FillInfo(&Contacts[i], i);
	i++;
}
