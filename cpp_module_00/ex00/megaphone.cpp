/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:57:27 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/09/26 11:06:37 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int i = 0;
	int	j = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (av[j])
		{
			i = 0;
			while (av[j][i])
			{
				std::cout << (char)toupper(av[j][i]);
				i++;
			}
			j++;
		} 
	}
	std::cout<<std::endl;
	return (0);
}