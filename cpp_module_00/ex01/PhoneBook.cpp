/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:26:33 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/09/30 15:50:45 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	PhoneBook::DisplayAvailabelContact()
{
	int	i = 0;
	while (i <= 7)
	{
		Contacts[i].DisplayLess(Contacts[i]);
		i++;	
	}
}

void PhoneBook::Search(int index)
{
	if (index <= 7)
		Contacts[index].Display(Contacts[index]);
	else
		std::cout << "can you please check the input !?\n";
}

void	PhoneBook::AddContact()
{
	static int i;

	if (i == 8)
		i = 0;
	Contacts[i].FillInfo(&Contacts[i], i);
	i++;
}
