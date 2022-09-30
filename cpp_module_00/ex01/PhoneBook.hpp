/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:11:26 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/09/30 15:45:01 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

class PhoneBook
{
	private:
		Contact Contacts[8];
	public:
		void	DisplayAvailabelContact();
		void	AddContact();
		void	Search(int index);
};
