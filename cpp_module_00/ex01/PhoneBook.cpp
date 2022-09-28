/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:26:33 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/09/28 18:47:21 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void PhoneBook::Search(int index)
{
	char	num = index + '0';
	if (isdigit(num) && index <= 7)
		Contacts[index].Display(Contacts[index]);
	else
		std::cout << "can you please check the input !?\n";
}

void	PhoneBook::AddContact()
{
	static int i;

	if (i == 7)
		i = 0;
	Contacts[i].FillInfo(&Contacts[i], i);
	i++;
}
