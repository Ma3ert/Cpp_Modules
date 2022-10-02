/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:11:26 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/02 11:27:05 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

class PhoneBook
{
	private:
		static int	n;
		Contact 	Contacts[8];
	public:
		int			DisplayAvailabelContact();
		void		AddContact();
		void		Search(int index);
};
