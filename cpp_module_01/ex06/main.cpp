/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:09:06 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/05 12:40:01 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int ac, char **av)
{
	Harl newHarl;
	if (ac != 2)
	{
		std::cout << "PARAM ERROR !!!" << std::endl;
		return (1);
	}
	newHarl.complain(av[1]);
	return (0);
}