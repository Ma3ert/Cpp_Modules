/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:07:20 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/11 09:47:26 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void ft_ft_char(void *c)
{
	*(char *)c += 1;
}

void ft_ft_int(void *c)
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

	// ==============int test===============

	for (int i = 0; i < 4; ++i)
		std::cout << intTab[i] << " ";
	std::cout << std::endl;

	iter(&intTab, 3, ft_ft_int);

	for (int i = 0; i < 4; ++i)
		std::cout << intTab[i] << " ";

	std::cout << "\n==============char test===============\n";

	for (int i = 0; i < 3; ++i)
		std::cout << charTab[i] << " ";
	std::cout << std::endl;

	iter(&charTab, 1, ft_ft_char);

	for (int i = 0; i < 3; ++i)
		std::cout << charTab[i] << " ";
	return (0);
}