/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:07:20 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/10 12:31:11 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"


void ft_ft(void *c)
{
	*(int *)c += 1;
}

template <typename T>
void iter(T *array, int lenght, void (*f)(void *))
{
	for (int i = 0; i < lenght; ++i)
		f(array[i]);
}

int main()
{
	int intTab[] = {1, 2, 3, 4};
	char charTab[] = {'a', 'b', 'c'};
	std::cout << intTab[0] << std::endl;
	iter(&intTab, 3, ft_ft);
	std::cout << intTab[0] << std::endl;
	iter(&charTab, 3, ft_ft);
}